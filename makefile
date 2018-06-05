CC=gcc

# -c = compilation
# -Wall = throws all warnings
CFLAGS=-c -Wall

all: generator
# -c = compilation
# -Wall = throws all warnings
generator: main.o 
	$(CC) main.o -o hanoi

main.o: main.c
	$(CC) $(CFLAGS) main.c



