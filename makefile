ABC.exe:main.o bog3.o fact.o
	gcc -o ABC.exe main.o bog3.o fact.o
main.o:main.c
	gcc -c main.c
bog3.o:bog3.c
	gcc -c bog3.c
fact.o:fact.c
	gcc -c fact.c
