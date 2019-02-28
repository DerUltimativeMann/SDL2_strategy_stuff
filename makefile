
PROG = GameStrategy

# Compiler C++
CC = g++

# Compiler Flags
CF = -Wall -pedantic -ansi
LF = -lSDL2main -lSDL2 -lopengl32

# obj Files
OBJ = game.o

# Build
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ) $(LF)
	rm $(OBJ)

%.o: src/%.cpp
	$(CC) -c $(CF) $<
