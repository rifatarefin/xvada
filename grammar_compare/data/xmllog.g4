grammar xmllog;
start: stmt
;
stmt: '<' xml_structure_variation '>'
;
xml_structure_variation: element_expr '/' 'e'
    | xml_structure_alt '/' 'c'
    | tag_expr '/' 'd'
    | 'a' '/'
    | 'e' '/'
    | xml_structure '/' 'a'
    | 'b' ' ' string assign_stmt '"' string '"' xml_element '/' 'b'
    | 'd' '/'
    | 'b' '/'
    | 'c' '/'
;
element_expr: 'e' xml_element
    | 'e' ' ' string assign_stmt '"' string '"' xml_element
;
xml_element: letter_expr '<'
;
letter_expr: '>' string
    | '>' stmt
;
string: tletters
;
xml_structure_alt: 'c' xml_element
    | 'c' ' ' string assign_stmt '"' string '"' xml_element
;
tag_expr: 'd' ' ' string assign_stmt '"' string '"' xml_element
    | 'd' xml_element
;
assign_stmt: '=' assign_stmt_
;
assign_stmt_: '"' string '"' ' ' string assign_stmt assign_stmt_
    | 
;
xml_structure: 'a' ' ' string assign_stmt '"' string '"' xml_element
    | 'a' xml_element
;
tletters: tletter
    | tletter tletters
;
tletter: 'a'
    | 'b'
    | 'c'
    | 'd'
    | 'e'
    | 'f'
    | 'g'
    | 'h'
    | 'i'
    | 'j'
    | 'k'
    | 'l'
    | 'm'
    | 'n'
    | 'o'
    | 'p'
    | 'q'
    | 'r'
    | 's'
    | 't'
    | 'u'
    | 'v'
    | 'w'
    | 'x'
    | 'y'
    | 'z'
    | 'A'
    | 'B'
    | 'C'
    | 'D'
    | 'E'
    | 'F'
    | 'G'
    | 'H'
    | 'I'
    | 'J'
    | 'K'
    | 'L'
    | 'M'
    | 'N'
    | 'O'
    | 'P'
    | 'Q'
    | 'R'
    | 'S'
    | 'T'
    | 'U'
    | 'V'
    | 'W'
    | 'X'
    | 'Y'
    | 'Z'
;