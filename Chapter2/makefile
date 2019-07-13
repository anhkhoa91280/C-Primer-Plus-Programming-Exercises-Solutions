CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = prog*.o .*

main: main prog1.o
	$(CXX) $(FLAGS) $(OBJ) main prog1.o $(VERSION) 

prog1.o: 2.1.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog1.o 2.1.cpp $(VERSION) 

clean:
	rm $(RM_OBJS)

