# Object files:
OBJS = ./lex.o

 # Header files:
HEADERS =

 # Source files:
SOURCES = ./lex.c

 # Executable name, run the program with ./molt
OUT = molt

 # Compiler flags:
FLAGS = -Wall -c -g

 # Add linker flags:
LFLAGS =

 # Compiler:
CC = clang

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

./lex.o: ./lex.c
	$(CC) $(FLAGS) ./lex.c -o ./lex.o

clean:
	rm -f $(OBJS) $(OUT)

