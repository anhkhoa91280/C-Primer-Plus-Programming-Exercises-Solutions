CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = prog*.o .*

main: main prog4.o
	$(CXX) $(FLAGS) $(OBJ) main prog4.o $(VERSION) 

prog1.o: 2.1.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog1.o 2.1.cpp $(VERSION) 

prog2.o: 2.2.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog2.o 2.2.cpp $(VERSION) 

prog3.o: 2.3.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog3.o 2.3.cpp $(VERSION) 

prog4.o: 2.4.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog4.o 2.4.cpp $(VERSION) 
clean:
	rm $(RM_OBJS)

