grammar minic;

/* ------------- Parser rules ------------- */

start
    : n2 EOF
    ;

n2
    : decl*
    ;

decl
    : var_decl
    | func_decl
    ;

var_decl
    : type idents SEMI
    ;

type
    : INT_T
    | FLOAT_T
    | BOOL_T
    | CHAR_T
    ;

idents
    : IDENT (COMMA idents)?
    ;

func_decl
    : rtype IDENT LPAREN args? RPAREN LBRACE n0* RBRACE
    ;

rtype
    : type
    | VOID_T
    ;

args
    : type IDENT (COMMA args)?
    ;

n0
    : DO n0 WHILE LPAREN n4 RPAREN SEMI
    | LBRACE n1
    | n4 SEMI
    | IF LPAREN n4 RPAREN n0 ELSE n0
    | IF LPAREN n4 RPAREN n0
    | LBRACE RBRACE
    | SEMI
    | WHILE LPAREN n4 RPAREN n0
    | var_decl
    ;

params
    : n4 (COMMA params)?
    ;

n1
    : RBRACE
    | n0 n1
    ;

n3
    : LPAREN n4 RPAREN
    | NUM
    | n3 PLUS n3
    | n3 MINUS n3
    | IDENT
    | IDENT LPAREN params? RPAREN
    ;

n4
    : n3
    | IDENT ASSIGN n4
    | n3 LT n3
    ;

/* ------------- Lexer rules ------------- */

IF      : 'if';
ELSE    : 'else';
WHILE   : 'while';
DO      : 'do';

INT_T   : 'int';
FLOAT_T : 'float';
BOOL_T  : 'bool';
CHAR_T  : 'char';
VOID_T  : 'void';

LPAREN  : '(';
RPAREN  : ')';
LBRACE  : '{';
RBRACE  : '}';
SEMI    : ';';
COMMA   : ',';
ASSIGN  : '=';
PLUS    : '+';
MINUS   : '-';
LT      : '<';

IDENT   : [a-zA-Z];        // as given: single letter
NUM     : [0-9]+;

WS      : [ \t\r\n]+ -> skip ;