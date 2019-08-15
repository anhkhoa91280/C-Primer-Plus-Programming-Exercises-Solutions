CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* .*.swp

main: main array.o
	$(CXX) $(FLAGS) $(OBJ) main array.o $(VERSION)
chartype.o: array.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) array.o array.cpp $(VERSION)

clean:
	rm $(RM_OBJS)

