import sys
from pathlib import Path
from liquid import Environment

def main() -> int:
    if len(sys.argv) != 2:
        return 2

    source = Path(sys.argv[1]).read_text(encoding="utf-8", errors="replace")

    try:
        Environment().from_string(source)
        return 0
    except Exception:
        return 1

if __name__ == "__main__":
    raise SystemExit(main())