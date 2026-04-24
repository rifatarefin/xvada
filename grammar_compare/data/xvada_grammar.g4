start: stmt
stmt: stmt_2 stmt
    | skip
    | L = expr_2

stmt_2: stmt ;
    | stmt_1 boolexpr then stmt else
    | while boolexpr do

stmt_1: if
    | stmt_2 stmt_1

boolexpr: true
    | false
    | boolexpr_ boolexpr
    | expr_stmt expr_2

boolexpr_: boolexpr &
    | ~

expr_2: numexpr
    | L

numexpr: ( expr )
    | n

expr: expr_1 numexpr
    | expr_1 L

expr_1: L+
    | numexpr +

expr_stmt: L ==
    | numexpr ==
