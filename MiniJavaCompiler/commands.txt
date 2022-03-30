flex LexicalAnalyser.l
bison -d SyntaxicAnalyser.y
gcc -o parser.exe SyntaxicAnalyser.tab.c lex.yy.c