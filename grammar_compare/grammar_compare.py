import re
import sys
import pandas as pd
from collections import OrderedDict
from pathlib import Path
from sentence_transformers import SentenceTransformer, util

def read_grammar_file(path):
    path = Path(path)
    if path.suffix != ".g4":
        raise ValueError(f"Expected a .g4 file, got: {path}")

    with open(path, "r", encoding="utf-8", errors="ignore") as f:
        return f.read()

def parse_grammar(grammar_text: str):
    """
    Parse a simple grammar of the form:

    start: stmt
    stmt: stmt ; stmt
        | L = numexpr
        | while boolexpr do stmt

    Returns:
        OrderedDict { nonterminal: full_rule_text }
    """
    rules = OrderedDict()
    current_lhs = None
    current_alts = []

    lines = grammar_text.splitlines()

    for raw_line in lines:
        line = raw_line.strip()
        if not line:
            continue

        # New rule: lhs: rhs
        m = re.match(r"^([A-Za-z_][A-Za-z0-9_]*)\s*:\s*(.*)$", line)
        if m:
            if current_lhs is not None:
                rules[current_lhs] = " | ".join(current_alts).strip()

            current_lhs = m.group(1)
            rhs = m.group(2).strip()
            current_alts = [rhs] if rhs else []
            continue

        # Continuation alternative: | rhs
        if line.startswith("|"):
            rhs = line[1:].strip()
            current_alts.append(rhs)
            continue

        # Continuation line without leading '|'
        if current_lhs is not None:
            if current_alts:
                current_alts[-1] = current_alts[-1] + " " + line
            else:
                current_alts.append(line)

    if current_lhs is not None:
        rules[current_lhs] = " | ".join(current_alts).strip()

    return rules


def build_rule_texts(rule_map, include_lhs=True):
    """
    Compare only nonterminal names.
    Ignore RHS, terminals, and production structure.
    """
    return {lhs: lhs for lhs in rule_map.keys()}

#def build_rule_texts(rule_map, include_lhs=True):
#    """
#    Convert rules into comparable text using only nonterminals.
#    Terminals are ignored.
#    """
#    nonterminals = set(rule_map.keys())
#
#    texts = {}
#
#    for lhs, rhs in rule_map.items():
#        tokens = re.findall(r"[A-Za-z_][A-Za-z0-9_]*", rhs)
#
#        rhs_nonterminals = [
#            tok for tok in tokens
#            if tok in nonterminals
#        ]
#
#        if include_lhs:
#            texts[lhs] = f"{lhs} : {' '.join(rhs_nonterminals)}"
#        else:
#            texts[lhs] = " ".join(rhs_nonterminals)

def compare_nonterminals(golden_rules, xvada_rules, model_name="sentence-transformers/all-MiniLM-L6-v2"):
    model = SentenceTransformer(model_name)

    golden_names = list(golden_rules.keys())
    xvada_names = list(xvada_rules.keys())

    golden_text_list = [golden_rules[name] for name in golden_names]
    xvada_text_list = [xvada_rules[name] for name in xvada_names]

    emb_golden = model.encode(golden_text_list, convert_to_tensor=True)
    emb_xvada = model.encode(xvada_text_list, convert_to_tensor=True)

    sim = util.cos_sim(emb_golden, emb_xvada).cpu().numpy()

    sim_df = pd.DataFrame(sim, index=golden_names, columns=xvada_names)

    best_matches = []
    max_scores = []

    for i, g_name in enumerate(golden_names):
        best_j = sim_df.iloc[i].argmax()
        x_name = xvada_names[best_j]
        score = float(sim_df.iloc[i, best_j])
        max_scores.append(score)

        best_matches.append({
            "golden_nonterminal": g_name,
            "best_xvada_match": x_name,
            "similarity": round(score, 4),
            "golden_rule": golden_rules[g_name],
            "xvada_rule": xvada_rules[x_name],
        })

    best_df = pd.DataFrame(best_matches).sort_values(by="similarity", ascending=False)

    final_score = sum(max_scores) / len(max_scores) if max_scores else 0.0

    return sim_df, best_df, final_score


if __name__ == "__main__":
    if len(sys.argv) != 3:
      print("Usage: python compare_grammar.py <golden_grammar.g4> <inferred_grammar.g4>")
      sys.exit(1)

    golden_file = sys.argv[1]
    inferred_file = sys.argv[2]

    golden_grammar = read_grammar_file(golden_file)
    xvada_grammar = read_grammar_file(inferred_file) 

    golden_parsed = parse_grammar(golden_grammar)
    xvada_parsed = parse_grammar(xvada_grammar)

    # Include lhs in the text being embedded
    golden_texts = build_rule_texts(golden_parsed, include_lhs=True)
    xvada_texts = build_rule_texts(xvada_parsed, include_lhs=True)

    sim_df, best_df, final_score = compare_nonterminals(golden_texts, xvada_texts)

    print("\n=== Pairwise similarity matrix ===")
    print(sim_df.round(4).to_string())

    print("\n=== Best XVada match for each golden nonterminal ===")
    print(best_df.to_string(index=False))

    print(f"\n=== Final Grammar Similarity Score ===")
    print(f"{final_score:.4f}")

    sim_df.to_csv("golden_vs_xvada_pairwise_similarity.csv")
    best_df.to_csv("golden_vs_xvada_best_matches.csv", index=False)

    summary_df = pd.DataFrame([{
        "final_score": round(final_score, 4),
        "num_golden_nonterminals": len(golden_texts),
        "num_xvada_nonterminals": len(xvada_texts),
    }])
    summary_df.to_csv("golden_vs_xvada_summary.csv", index=False)

    print("\nSaved:")
    print("  golden_vs_xvada_pairwise_similarity.csv")
    print("  golden_vs_xvada_best_matches.csv")
    print("  golden_vs_xvada_summary.csv")
