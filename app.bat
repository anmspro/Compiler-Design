bison -d project.y
flex project.l
gcc lex.yy.c project.tab.c -o app
app