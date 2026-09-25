"""Compare inferred nonterminal labels with golden parser-rule labels."""
from __future__ import annotations

import argparse
import re
from collections import OrderedDict
from pathlib import Path

import numpy as np
import pandas as pd

MODEL_NAME = "jinaai/jina-embeddings-v2-base-code"
DEVICE = "cpu"
SUBJECT_GRAMMARS = OrderedDict([
    ("c", "C.g4"), ("cpp", "CPP14Parser.g4"), ("curl", None),
    ("java", "JavaParser.g4"), ("json", "g_json.g4"), ("liquid", None),
    ("lisp", "g_lisp.g4"), ("lua", "Lua.g4"), ("minic", "minic.g4"),
    ("mysql", "MySqlParser.g4"), ("rust", "RustParser.g4"),
    ("tiny", "tiny.g4"), ("tinyc-500", "tinyc.g4"),
    ("tinyc", "tinyc.g4"), ("turtle", "g_turtle.g4"),
    ("while", "g_while.g4"), ("xml", "g_xml.g4"),
])


def read_grammar_file(path):
    return Path(path).read_text(encoding="utf-8", errors="ignore")


def _strip_comments_and_actions(text):
    """Blank comments and unquoted brace actions, retaining strings/newlines."""
    out, i, quote, escaped = [], 0, None, False
    while i < len(text):
        char = text[i]
        following = text[i + 1] if i + 1 < len(text) else ""
        if quote:
            out.append(char)
            if escaped:
                escaped = False
            elif char == "\\":
                escaped = True
            elif char == quote:
                quote = None
            i += 1
        elif char in {"'", '"', "/"} and not (char == "/" and following in "/*"):
            quote = char
            out.append(char)
            i += 1
        elif char == "/" and following == "/":
            while i < len(text) and text[i] not in "\r\n":
                out.append(" ")
                i += 1
        elif char == "/" and following == "*":
            out.extend("  ")
            i += 2
            while i < len(text):
                if text[i:i + 2] == "*/":
                    out.extend("  ")
                    i += 2
                    break
                out.append("\n" if text[i] == "\n" else " ")
                i += 1
        elif char == "{":
            depth = 1
            out.append(" ")
            i += 1
            while i < len(text) and depth:
                if text[i] == "{":
                    depth += 1
                elif text[i] == "}":
                    depth -= 1
                out.append("\n" if text[i] == "\n" else " ")
                i += 1
        else:
            out.append(char)
            i += 1
    return "".join(out)


_SAME_LINE_RULE = re.compile(r"^[!?]?([a-z][A-Za-z0-9_]*)(?:\.\d+)?\s*:\s*(.*)$")
_BARE_RULE = re.compile(r"^[!?]?([a-z][A-Za-z0-9_]*)(?:\.\d+)?\s*$")


def parse_grammar(grammar_text):
    """Extract lowercase parser rules in source order and preserve their RHS."""
    lines = _strip_comments_and_actions(grammar_text).splitlines()
    rules, index = OrderedDict(), 0
    while index < len(lines):
        line = lines[index].strip()
        match = _SAME_LINE_RULE.match(line)
        if match:
            name, initial = match.groups()
        else:
            bare = _BARE_RULE.match(line)
            lookahead = index + 1
            while lookahead < len(lines) and not lines[lookahead].strip():
                lookahead += 1
            if not bare or lookahead >= len(lines) or not lines[lookahead].strip().startswith(":"):
                index += 1
                continue
            name, initial = bare.group(1), lines[lookahead].strip()[1:].strip()
            index = lookahead
        parts = [initial] if initial else []
        index += 1
        while index < len(lines):
            candidate = lines[index].strip()
            if _SAME_LINE_RULE.match(candidate):
                break
            next_index = index + 1
            while next_index < len(lines) and not lines[next_index].strip():
                next_index += 1
            if (_BARE_RULE.match(candidate) and next_index < len(lines)
                    and lines[next_index].strip().startswith(":")):
                break
            if candidate:
                parts.append(candidate)
            if ";" in candidate:
                index += 1
                break
            index += 1
        rhs = " ".join(parts).strip()
        rules[name] = rhs[:-1].rstrip() if rhs.endswith(";") else rhs
    return rules


def literal_only_rules(grammar_text):
    from lark import Lark
    from lark.grammar import Terminal

    source_rules = set(parse_grammar(grammar_text))
    parser = Lark(grammar_text, parser="earley", start="start")
    grouped = {}
    for rule in parser.rules:
        grouped.setdefault(rule.origin.name, []).append(rule)
    return {
        name for name, alternatives in grouped.items()
        if name in source_rules and alternatives and all(
            alt.expansion and all(isinstance(symbol, Terminal) for symbol in alt.expansion)
            for alt in alternatives
        )
    }


def normalize_label(label):
    label = re.sub(r"_\d+$", "", label)
    label = re.sub(r"([a-z0-9])([A-Z])", r"\1 \2", label)
    return re.sub(r"_+", " ", label).lower().strip()


def build_rule_texts(rule_map, normalize_labels=False, include_lhs=True):
    del include_lhs
    return {name: normalize_label(name) if normalize_labels else name for name in rule_map}


def load_model():
    from sentence_transformers import SentenceTransformer
    return SentenceTransformer(MODEL_NAME, trust_remote_code=True, device=DEVICE)


def _cosine_similarity(left, right):
    left, right = np.asarray(left, float), np.asarray(right, float)
    left /= np.maximum(np.linalg.norm(left, axis=1, keepdims=True), 1e-12)
    right /= np.maximum(np.linalg.norm(right, axis=1, keepdims=True), 1e-12)
    return left @ right.T


def compare_nonterminals(golden_rules, xvada_rules, model=None):
    if not golden_rules or not xvada_rules:
        raise ValueError("Both grammars must contain comparable rules")
    model = model or load_model()
    golden_names, xvada_names = list(golden_rules), list(xvada_rules)
    golden_vectors = model.encode([golden_rules[n] for n in golden_names], convert_to_numpy=True)
    xvada_vectors = model.encode([xvada_rules[n] for n in xvada_names], convert_to_numpy=True)
    similarity = _cosine_similarity(golden_vectors, xvada_vectors)
    sim_df = pd.DataFrame(similarity, index=golden_names, columns=xvada_names)
    golden_matches = [{
        "golden_nonterminal": name,
        "best_xvada_match": xvada_names[int(np.argmax(similarity[i]))],
        "similarity": round(float(np.max(similarity[i])), 4),
    } for i, name in enumerate(golden_names)]
    xvada_matches = [{
        "xvada_nonterminal": name,
        "best_golden_match": golden_names[int(np.argmax(similarity[:, j]))],
        "similarity": round(float(np.max(similarity[:, j])), 4),
    } for j, name in enumerate(xvada_names)]
    return (
        sim_df,
        pd.DataFrame(golden_matches).sort_values("similarity", ascending=False),
        float(np.max(similarity, axis=1).mean()),
        pd.DataFrame(xvada_matches).sort_values("similarity", ascending=False),
        float(np.max(similarity, axis=0).mean()),
    )


def label_f1(precision, recall):
    return 0.0 if precision + recall == 0 else 2 * precision * recall / (precision + recall)


def _markdown_table(frame):
    def display(value):
        if pd.isna(value):
            return "N/A"
        return str(value).replace("|", "\\|").replace("\n", " ")

    columns = list(frame.columns)
    lines = [
        "| " + " | ".join(columns) + " |",
        "| " + " | ".join("---" for _ in columns) + " |",
    ]
    lines.extend(
        "| " + " | ".join(display(row[column]) for column in columns) + " |"
        for _, row in frame.iterrows()
    )
    return "\n".join(lines)


def _markdown_report(report, normalize_labels, exclude_literal_only, title, extra_lines=()):
    scored = report[report.status == "scored"]
    precision = scored.label_precision.astype(float).mean()
    recall = scored.label_recall.astype(float).mean()
    f1 = scored.label_f1.astype(float).mean()
    lines = [
        f"# {title}", "", f"- Model: `{MODEL_NAME}`", f"- Device: `{DEVICE}`",
        f"- Label normalization: `{'enabled' if normalize_labels else 'disabled'}`",
        "- `start` and `stmt` rules included",
        "- Golden lexer rules excluded",
        f"- Inferred literal-only rules excluded: `{'enabled' if exclude_literal_only else 'disabled'}`",
        *extra_lines, f"- Scored subjects: {len(scored)} of {len(report)}",
        "- Label precision: mean best-match similarity from inferred labels to golden labels",
        "- Label recall: mean best-match similarity from golden labels to inferred labels",
        f"- Overall label precision macro-average: {precision:.4f}",
        f"- Overall label recall macro-average: {recall:.4f}",
        f"- Overall label F1 macro-average: {f1:.4f}", "", _markdown_table(report), "",
    ]
    return "\n".join(lines)


def run_batch(golden_dir, inferred_dir, output_dir, *, normalize_labels=False,
              exclude_literal_only=True, model=None, output_basename="xvada_direct_similarity"):
    golden_dir, inferred_dir, output_dir = map(Path, (golden_dir, inferred_dir, output_dir))
    output_dir.mkdir(parents=True, exist_ok=True)
    model, rows = model or load_model(), []
    for subject, golden_filename in SUBJECT_GRAMMARS.items():
        inferred_path = inferred_dir / f"{subject}-glade.lark"
        inferred_text = read_grammar_file(inferred_path)
        inferred_rules = parse_grammar(inferred_text)
        literals = literal_only_rules(inferred_text) if exclude_literal_only else set()
        inferred_rules = OrderedDict((n, r) for n, r in inferred_rules.items() if n not in literals)
        common = dict(subject=subject, golden_file=golden_filename or "",
                      inferred_file=inferred_path.name,
                      inferred_nonterminals=len(inferred_rules),
                      excluded_literal_only_rules=len(literals), model_name=MODEL_NAME,
                      device=DEVICE, normalized=normalize_labels)
        if golden_filename is None:
            rows.append({**common, "golden_nonterminals": np.nan, "label_precision": np.nan,
                         "label_recall": np.nan, "label_f1": np.nan,
                         "status": "N/A: golden grammar unavailable"})
            continue
        golden_rules = parse_grammar(read_grammar_file(golden_dir / golden_filename))
        result = compare_nonterminals(
            build_rule_texts(golden_rules, normalize_labels),
            build_rule_texts(inferred_rules, normalize_labels), model=model)
        recall, precision = result[2], result[4]
        rows.append({**common, "golden_nonterminals": len(golden_rules),
                     "label_precision": round(precision, 4),
                     "label_recall": round(recall, 4),
                     "label_f1": round(label_f1(precision, recall), 4), "status": "scored"})
    columns = ["subject", "golden_file", "inferred_file", "golden_nonterminals",
               "inferred_nonterminals", "excluded_literal_only_rules",
               "label_precision", "label_recall", "label_f1", "status", "model_name",
               "device", "normalized"]
    report = pd.DataFrame(rows)[columns]
    csv_path, md_path = output_dir / f"{output_basename}.csv", output_dir / f"{output_basename}.md"
    report.to_csv(csv_path, index=False)
    md_path.write_text(_markdown_report(report, normalize_labels, exclude_literal_only,
                                        "XVADA Direct-Relabeling Nonterminal Similarity"), encoding="utf-8")
    return report, csv_path, md_path


def run_multi_batch(golden_dir, inferred_dirs, output_dir, *, normalize_labels=False,
                    exclude_literal_only=True, model=None):
    if len(inferred_dirs) < 2:
        raise ValueError("At least two inferred directories are required")
    run_count = len(inferred_dirs)
    output_dir = Path(output_dir)
    model, reports, summaries = model or load_model(), [], []
    for number, inferred_dir in enumerate(inferred_dirs, 1):
        report, _, _ = run_batch(golden_dir, inferred_dir, output_dir / f"run_{number}",
                                 normalize_labels=normalize_labels,
                                 exclude_literal_only=exclude_literal_only, model=model)
        reports.append(report)
        scored = report[report.status == "scored"]
        summaries.append({"run": number, "label_precision": scored.label_precision.mean(),
                          "label_recall": scored.label_recall.mean(), "label_f1": scored.label_f1.mean()})
    aggregate = reports[0].copy()
    for metric in ("label_precision", "label_recall", "label_f1"):
        values = pd.concat([r.set_index("subject")[metric] for r in reports], axis=1)
        aggregate[metric] = aggregate.subject.map(values.mean(axis=1)).round(4)
    number_name = {2: "two", 3: "three"}.get(run_count, str(run_count))
    aggregate["inferred_file"] = f"{run_count}-run average"
    basename = f"xvada_direct_similarity_{number_name}_run_average"
    csv_path = output_dir / f"{basename}.csv"
    md_path = output_dir / f"{basename}.md"
    aggregate.to_csv(csv_path, index=False)
    run_lines = tuple(
        f"- Run {summary['run']} macro-averages: precision {summary['label_precision']:.4f}, "
        f"recall {summary['label_recall']:.4f}, F1 {summary['label_f1']:.4f}"
        for summary in summaries
    )
    md_path.write_text(_markdown_report(aggregate, normalize_labels, exclude_literal_only,
                                        f"XVADA {run_count}-Run Average Nonterminal Similarity",
                                        (f"- Independent label runs: {run_count}", *run_lines)),
                       encoding="utf-8")
    return aggregate, summaries, csv_path, md_path


def parse_arguments(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("golden_file", nargs="?")
    parser.add_argument("inferred_file", nargs="?")
    parser.add_argument("--batch", action="store_true")
    parser.add_argument("--golden-dir")
    parser.add_argument("--inferred-dir", action="append")
    parser.add_argument("--output-dir", default="grammar_compare/reports")
    parser.add_argument("--normalize-labels", action="store_true")
    parser.add_argument("--include-literal-only-rules", action="store_true")
    return parser.parse_args(argv)


def main(argv=None):
    args = parse_arguments(argv)
    options = dict(normalize_labels=args.normalize_labels,
                   exclude_literal_only=not args.include_literal_only_rules)
    if args.batch:
        if not args.golden_dir or not args.inferred_dir:
            raise SystemExit("--batch requires --golden-dir and --inferred-dir")
        function = run_batch if len(args.inferred_dir) == 1 else run_multi_batch
        inferred = args.inferred_dir[0] if len(args.inferred_dir) == 1 else args.inferred_dir
        function(args.golden_dir, inferred, args.output_dir, **options)
        return 0
    if not args.golden_file or not args.inferred_file:
        raise SystemExit("Provide two grammar files, or use --batch")
    golden = parse_grammar(read_grammar_file(args.golden_file))
    inferred = parse_grammar(read_grammar_file(args.inferred_file))
    result = compare_nonterminals(build_rule_texts(golden, args.normalize_labels),
                                  build_rule_texts(inferred, args.normalize_labels))
    print(f"Golden-to-inferred score: {result[2]:.4f}")
    print(f"Inferred-to-golden score: {result[4]:.4f}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
