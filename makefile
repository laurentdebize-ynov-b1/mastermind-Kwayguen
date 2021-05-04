CFLAGS = -g -pedantic-errors -ansi -Wall -std=c99

program : mastermind.o
	gcc -g -o program mastermind.o

mastermind.o : mastermind.c 
	gcc -c $(CFLAGS) mastermind.c 

clean:
	rm program *.o