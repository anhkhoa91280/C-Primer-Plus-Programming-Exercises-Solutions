CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* .*.swp

main: main string_2.o
	$(CXX) $(FLAGS) $(OBJ) main string_2.o $(VERSION)
chartype.o: string_2.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) string_2.o string_2.cpp $(VERSION)

#main: main string.o
#	$(CXX) $(FLAGS) $(OBJ) main string.o $(VERSION)
#chartype.o: string.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) string.o string.cpp $(VERSION)

#main: main array.o
#	$(CXX) $(FLAGS) $(OBJ) main array.o $(VERSION)
#chartype.o: array.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) array.o array.cpp $(VERSION)

clean:
	rm $(RM_OBJS)

