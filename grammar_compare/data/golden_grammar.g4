start: stmt
stmt: stmt ; stmt
    | L = numexpr
    | while boolexpr do stmt
    | if boolexpr then stmt else stmt
    | skip

boolexpr: ~ boolexpr
    | boolexpr & boolexpr
    | numexpr == numexpr
    | true
    | false

numexpr:
    ( numexpr + numexpr )
    | L
    | n
