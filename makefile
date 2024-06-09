ABC.exe:main.o bog3.o fact.o reverse.o palindrome.o big2.o sumtwo.o fibanaci.o sort.o
        gcc -o ABC.exe main.o bog3.o fact.o reverse.o palindrome.o big2.o sumtwo.o fibanaci.o sort.o
main.o:main.c
        gcc -c main.c
bog3.o:bog3.c
        gcc -c bog3.c
fact.o:fact.c
        gcc -c fact.c
reverse.o:reverse.c
        gcc -c reverse.c
palindrome.o:palindrome.c
        gcc -c palindrome.c
big2.o:big2.c
        gcc -c big2.c
sumtwo.o:sumtwo.c
        gcc -c sumtwo.c
fibanaci.o:fibanaci.c
        gcc -c fibanaci.c
sort.o:sort.c
        gcc -c sort.c

