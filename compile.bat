cd 4u v0.0.1
flex -o lexique_4u.c lexique_4u.lex
bison -d syntax_4u.y
gcc lexique_4u.c syntax_4u.tab.c generation_code.c `pkg-config --cflags --libs glib-2.0` -o 4u
