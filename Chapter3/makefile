CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = prog*.o .*

main: main prog_limits.o
	$(CXX) $(FLAGS) $(OBJ) main prog_limits.o $(VERSION) 

prog_limits.o: limits.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog_limits.o limits.cpp $(VERSION) 

clean:
	rm $(RM_OBJS)

