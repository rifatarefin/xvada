import time
from lark import Lark
import tempfile
import subprocess
import os
import atexit
import json
import select
import hashlib
import sys

"""
This file gives  classes to use as "Oracles" in the Arvada algorithm.
"""

class ParseException(Exception):
    pass


class OracleInfrastructureError(RuntimeError):
    """Raised when an oracle result cannot be trusted as a membership decision."""

    def __init__(self, message, quarantine_path=None):
        super().__init__(message)
        self.quarantine_path = quarantine_path


def _command_argv(command):
    if isinstance(command, (list, tuple)):
        if not command:
            raise ValueError("oracle command must not be empty")
        return [os.fspath(part) for part in command]
    return [os.fspath(command)]


def _strict_json_object(value):
    def reject_constant(constant):
        raise ValueError(f"non-finite JSON constant {constant!r}")

    def unique_object(pairs):
        result = {}
        for key, item in pairs:
            if key in result:
                raise ValueError(f"duplicate JSON key {key!r}")
            result[key] = item
        return result

    return json.loads(
        value,
        object_pairs_hook=unique_object,
        parse_constant=reject_constant,
    )


class ExternalOracle:
    """
    One-shot filename-protocol oracle.

    X-VADA writes each candidate to a temporary file and invokes
    ``COMMAND FILE``. Exit 0 means accept and exit 1 means reject. A timeout,
    signal, launch failure, or any other exit code is infrastructure failure,
    not a membership decision. Infrastructure failures are retried a bounded
    number of times, quarantined, raised, and never cached.
    """

    protocol = "filename"

    def __init__(
        self,
        command,
        timeout=3,
        max_retries=1,
        failure_dir=None,
    ):
        """
        ``command`` is an executable path or argv sequence, for example
        ``readpng`` in:

            $ readpng <MY_FILE>
        """
        self.command = command
        self.command_argv = _command_argv(command)
        self._environment_class = None
        if command == "liquid":
            from liquid import Environment

            self._environment_class = Environment
        if timeout <= 0:
            raise ValueError("oracle timeout must be positive")
        if max_retries < 0:
            raise ValueError("oracle max_retries must be non-negative")
        self.timeout = timeout
        self.max_retries = max_retries
        self.failure_dir = os.fspath(failure_dir) if failure_dir is not None else None
        self.cache_set = {}
        self.parse_calls = 0
        self.real_calls = 0
        self.time_spent = 0

    def _failure_directory(self):
        return (
            self.failure_dir
            or os.environ.get("X_VADA_ORACLE_FAILURE_DIR")
            or os.environ.get("X_VADA_TIMEOUT_DIR")
            or os.path.join(os.getcwd(), "oracle_failures")
        )

    def _quarantine(self, string, error, attempts, timeout):
        path = None
        try:
            failure_dir = self._failure_directory()
            os.makedirs(failure_dir, exist_ok=True)
            input_bytes = string.encode("utf-8")
            digest = hashlib.sha256(input_bytes).hexdigest()
            preview_bytes = input_bytes[:4096]
            oracle_name = os.path.basename(self.command_argv[0]) or "oracle"
            path = os.path.join(
                failure_dir,
                f"{oracle_name}-{self.protocol}-{time.time_ns()}-{digest[:16]}.json",
            )
            with open(path, "w", encoding="utf-8") as failure_file:
                json.dump(
                    {
                        "attempts": attempts,
                        "command": self.command_argv,
                        "error": str(error),
                        "error_type": type(error).__name__,
                        "input_bytes": len(input_bytes),
                        "input_sha256": digest,
                        "protocol": self.protocol,
                        "template_preview": preview_bytes.decode(
                            "utf-8", errors="replace"
                        ),
                        "template_truncated": len(preview_bytes) < len(input_bytes),
                        "timeout_seconds": timeout,
                    },
                    failure_file,
                    indent=2,
                    sort_keys=True,
                )
                failure_file.write("\n")
        except OSError as quarantine_error:
            print(
                f"Could not quarantine {self.protocol} oracle failure: {quarantine_error}",
                file=sys.stderr,
            )
        return path

    def _raise_infrastructure_error(self, string, error, attempts, timeout):
        quarantine_path = self._quarantine(string, error, attempts, timeout)
        location = f"; quarantined at {quarantine_path}" if quarantine_path else ""
        raise OracleInfrastructureError(
            f"{self.protocol} oracle infrastructure failure after {attempts} "
            f"attempt(s): {error}{location}",
            quarantine_path=quarantine_path,
        ) from error

    def _run_filename_oracle(self, string, timeout):
        if self._environment_class is not None:
            try:
                self._environment_class().from_string(string)
                return True
            except Exception:
                return False
        with tempfile.NamedTemporaryFile() as candidate_file:
            candidate_file.write(string.encode("utf-8"))
            candidate_file.flush()
            completed = subprocess.run(
                self.command_argv + [candidate_file.name],
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL,
                check=False,
                timeout=timeout,
            )
        if completed.returncode == 0:
            return True
        if completed.returncode == 1:
            return False
        raise RuntimeError(
            f"oracle exited with infrastructure return code {completed.returncode}"
        )

    def _parse_internal(self, string, timeout):
        last_error = None
        attempts = self.max_retries + 1
        for _attempt in range(1, attempts + 1):
            self.real_calls += 1
            try:
                return self._run_filename_oracle(string, timeout)
            except (OSError, RuntimeError, subprocess.SubprocessError) as error:
                last_error = error
        self._raise_infrastructure_error(string, last_error, attempts, timeout)

    def parse(self, string, timeout=None):
        """
        Cache only trusted Boolean membership decisions.

        ``OracleInfrastructureError`` deliberately bypasses ``cache_set`` so a
        later healthy oracle can evaluate the same candidate.
        """
        self.parse_calls += 1
        if string in self.cache_set:
            if self.cache_set[string]:
                return True
            else:
                raise ParseException(f"doesn't parse: {string}")
        effective_timeout = self.timeout if timeout is None else timeout
        if effective_timeout <= 0:
            raise ValueError("oracle timeout must be positive")
        s = time.time()
        try:
            res = self._parse_internal(string, effective_timeout)
        finally:
            self.time_spent += time.time() - s
        self.cache_set[string] = res
        if res:
            return True
        raise ParseException(f"doesn't parse: {string}")


class PersistentExternalOracle(ExternalOracle):
    """
    Persistent JSONL-protocol oracle.

    Requests are {"template": "..."}; responses are {"accept": true|false}.
    Timeout, EOF, malformed JSON, malformed response shape, and process failure
    are retried, quarantined, raised, and never converted into acceptance.
    """

    protocol = "persistent-jsonl"
    max_response_bytes = 1024 * 1024

    def __init__(self, command, timeout=30, max_retries=1, failure_dir=None):
        super().__init__(
            command,
            timeout=timeout,
            max_retries=max_retries,
            failure_dir=failure_dir,
        )
        self.process = None
        self._start_process()
        atexit.register(self.close)

    def _start_process(self):
        self._stdout_buffer = b""
        self.process = subprocess.Popen(
            self.command_argv,
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.DEVNULL,
            bufsize=0,
        )
        os.set_blocking(self.process.stdin.fileno(), False)

    def close(self):
        process = self.process
        self.process = None
        if process is None:
            return
        try:
            if process.poll() is None:
                process.terminate()
                try:
                    process.wait(timeout=1)
                except subprocess.TimeoutExpired:
                    process.kill()
                    process.wait()
        finally:
            for stream in (process.stdin, process.stdout, process.stderr):
                if stream is not None:
                    stream.close()

    def _query(self, string, timeout):
        if self.process is None or self.process.poll() is not None:
            self.close()
            self._start_process()
        deadline = time.monotonic() + timeout
        request = (json.dumps({"template": string}) + "\n").encode("utf-8")
        stdin_fd = self.process.stdin.fileno()
        written = 0
        while written < len(request):
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise subprocess.TimeoutExpired(self.command, timeout)
            _, writable, _ = select.select([], [stdin_fd], [], remaining)
            if not writable:
                raise subprocess.TimeoutExpired(self.command, timeout)
            sent = os.write(stdin_fd, request[written:])
            if sent <= 0:
                raise RuntimeError("persistent oracle stopped accepting requests")
            written += sent
        while b"\n" not in self._stdout_buffer:
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise subprocess.TimeoutExpired(self.command, timeout)
            readable, _, _ = select.select(
                [self.process.stdout.fileno()], [], [], remaining
            )
            if not readable:
                raise subprocess.TimeoutExpired(self.command, timeout)
            chunk = os.read(self.process.stdout.fileno(), 4096)
            if not chunk:
                raise RuntimeError("persistent oracle exited without a response")
            self._stdout_buffer += chunk
            if len(self._stdout_buffer) > self.max_response_bytes:
                raise RuntimeError(
                    "persistent oracle response exceeded the one-megabyte limit"
                )
        response_bytes, _, self._stdout_buffer = self._stdout_buffer.partition(b"\n")
        try:
            response = response_bytes.decode("utf-8")
            result = _strict_json_object(response)
        except (UnicodeError, ValueError) as error:
            preview = response_bytes[:4096]
            suffix = b"..." if len(response_bytes) > len(preview) else b""
            raise RuntimeError(
                f"malformed persistent oracle JSON: {preview + suffix!r}"
            ) from error
        if (
            type(result) is not dict
            or set(result) != {"accept"}
            or type(result["accept"]) is not bool
        ):
            raise RuntimeError(f"invalid persistent oracle response: {response!r}")
        return result["accept"]

    def _parse_internal(self, string, timeout):
        last_error = None
        attempts = self.max_retries + 1
        for attempt in range(1, attempts + 1):
            self.real_calls += 1
            try:
                return self._query(string, timeout)
            except (
                BrokenPipeError,
                OSError,
                RuntimeError,
                ValueError,
                subprocess.SubprocessError,
            ) as error:
                last_error = error
                self.close()
                if attempt < attempts:
                    continue
        self._raise_infrastructure_error(string, last_error, attempts, timeout)


class CachingOracle:
    """
    Wraps a "Lark" parser object to provide caching of previous calls.
    """

    def __init__(self, oracle: Lark):
        self.oracle = oracle
        self.cache_set = {}
        self.parse_calls = 0

    def parse(self, string):
        self.parse_calls += 1
        if string in self.cache_set:
            if self.cache_set[string]:
                return True
            else:
                raise ParseException("doesn't parse")
        else:
            try:
                self.oracle.parse(string)
                self.cache_set[string] = True
            except Exception as e:
                self.cache_set[string] = False
                raise ParseException("doesn't parse")
