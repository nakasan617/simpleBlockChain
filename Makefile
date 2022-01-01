CC = g++
FLAGS = -Wall -pedantic
OBJ = Block.o 
DEPS = Block.h
FLAGS = -Wall -pedantic

main: main.cpp $(OBJ) 
	$(CC) main.cpp $(OBJ) $(FLAGS) -std=c++11 -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(FLAGS) -std=c++11

.PHONY: clean
clean:
	rm -f $(OBJ) main
