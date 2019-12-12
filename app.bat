bison -d bison.y
flex flex.l
gcc lex.yy.c bison.tab.c -o app
app