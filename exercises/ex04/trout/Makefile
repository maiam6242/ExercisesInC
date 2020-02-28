trout.o: trout.c trout.h
	gcc -c trout.c
util.o: util.h util.c
	gcc -c util.c
main.o: main.c trout.o util.o
	gcc -c main.c
trout: main.o
	gcc -g -o trout main.o trout.c util.c
