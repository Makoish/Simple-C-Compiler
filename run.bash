# yacc
bison -d parser.y
# lex
lex lexer.l
# run
g++ src/SymbolTable.cpp src/sym.cpp src/FunctionTable.cpp lex.yy.c src2/QUAD.cpp parser.tab.c -o compiler.o