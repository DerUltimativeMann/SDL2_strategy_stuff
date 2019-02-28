
PROG = GameStrategy

# Compiler C++
CC = g++

# Compiler Flags
CF = -Wall -pedantic -ansi
LF = -lmingw32 -lSDL2main -lSDL2 -lopengl32

# obj Files
OBJ = game.o framework.o

# Build
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) $(LF)
	rm $(OBJ)

%.o: src/%.cpp
	$(CC) -c $(CF) $<

%.o: src/sys/%.cpp
	$(CC) -c $(CF) $<
