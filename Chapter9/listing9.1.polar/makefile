CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
LIB = -stdlib=libc++
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* .*.swp

default: polar
polar: polar.o polar_main.o  
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) polar polar_main.o polar.o
polar_main.o: polar_main.cpp
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) polar_main.cpp
polar.o: polar.cpp polar.h
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) polar.cpp

clean:
	rm $(RM_OBJS)
