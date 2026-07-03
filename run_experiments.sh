#!/usr/bin/bash
mkdir -p "experiments/logs"
for lan in turtle "while" lisp xml json tinyc tinyc-500 tiny minic curl liquid lua c java mysql; do
    if [ "${lan}" = "liquid" ]; then
        parser="liquid"
    else
        parser="experiments/$lan/parse_$lan"
    fi
    train="experiments/$lan/$lan-train"
    test="experiments/$lan/$lan-test"
    log="experiments/logs/$lan.log"

    echo "Running experiments for $lan"
    python3 search.py $parser $train $log
    pypy eval.py $parser $test $log
    done

