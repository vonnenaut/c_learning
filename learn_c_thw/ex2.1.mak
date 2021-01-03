CFLAGS=-Wall -g



clean:

	rm -f ex1

all: ex1
	
	gcc -o ex1 ex1.c
