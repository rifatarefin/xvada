# Grammar label comparison

Run the XVADA batch with raw labels and the Jina code embedding model:

```bash
python3 grammar_compare/grammar_compare.py --batch \
  --golden-dir "inferred/golden grammars" \
  --inferred-dir inferred/xvada-eval-direct-relabeled \
  --output-dir grammar_compare/reports
```

The comparison includes `start` and `stmt`. Golden parser nonterminals are the
lowercase parser rules in the grammar, while inferred rules whose alternatives
are all terminal-only are treated as lexer wrappers and excluded by default.

Use `--normalize-labels` to split snake/camel case and remove numeric collision
suffixes. Use `--include-literal-only-rules` to disable the inferred lexer-rule
heuristic.

Pass `--inferred-dir` two or more times to produce individual run reports and
an averaged report. The model is loaded once for the complete multi-run batch.
