
CC = gcc
#Compiler flags 
CFLAGS = -g
#When given no options, create an executable called ass2
all: ass2
ass2: master.o 
	gcc master.o -o ass2
master.o: master.c 
	gcc -c  master.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c 
.c.o:
	$(CC) $(CFLAGS) -c $<
#Remove all generated object files 
.PHONY: clean
clean:
	  rm -rf *o ass2


