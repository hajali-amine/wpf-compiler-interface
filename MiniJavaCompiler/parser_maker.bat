flex LexicalAnalyser.l
bison -d SyntaxicAnalyser.y
gcc -o minijava_compiler.exe SyntaxicAnalyser.tab.c lex.yy.c semantic.c generator.c