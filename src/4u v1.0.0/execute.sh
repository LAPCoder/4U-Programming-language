cd ./ #cd /home/pi/Documents/Programmes/4u/4u\ v1.0.0/ # Aller dans le répertoire.
rm lexique_4u.c
rm syntax_4u.tab.c
rm syntax_4u.tab.h
rm a.out
echo 'flex'
flex -o lexique_4u.c lexique_4u.lex
echo 'bison'
bison -d syntax_4u.y
echo 'gcc'
gcc lexique_4u.c syntax_4u.tab.c generation_code\ c.c `pkg-config --cflags --libs glib-2.0` -o 4uToC
gcc lexique_4u.c syntax_4u.tab.c generation_code\ js.c `pkg-config --cflags --libs glib-2.0` -o 4uToJs
echo 'execute'
./4uToC program.4u
# Si il y a une erreux 'Erreur de segmentation', le programme .4u n'est pas trouvé.
echo 'gcc'
gcc program.c
echo 'end'
./a.out
echo 'press ctrl + C to quit'
while true
do
	sleep 2
done
