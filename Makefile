# Object files:
OBJS = target/lex.o target/main.o

 # Header files:
HEADERS = src/lex.h src/token.h

 # Source files:
SOURCES = src/lex.c src/main.c

 # Executable name, run the program with ./molt
OUT = molt

 # Compiler flags:
FLAGS = -g -c

 # Add linker flags:
LFLAGS =

 # Compiler:
CC = clang

all: mkdirs $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

target/lex.o: src/lex.c
	$(CC) $(FLAGS) src/lex.c -o target/lex.o

target/main.o: src/main.c
	$(CC) $(FLAGS) src/main.c -o target/main.o

mkdirs:
	mkdir -p target
clean:
	rm -f $(OBJS) $(OUT)

