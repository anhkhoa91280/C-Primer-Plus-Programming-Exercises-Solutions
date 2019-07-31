CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = prog*.o .* .*.swp

main: main hexoct1.o
	$(CXX) $(FLAGS) $(OBJ) main hexoct1.o $(VERSION)
hexoct1.o: hexoct1.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) hexoct1.o hexoct1.cpp $(VERSION)

#main: main prog_limits_2.o
#	$(CXX) $(FLAGS) $(OBJ) main prog_limits_2.o $(VERSION)
#prog_limits_2.o: limits_2.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog_limits_2.o limits_2.cpp $(VERSION)

#main: main prog_limits.o
#	$(CXX) $(FLAGS) $(OBJ) main prog_limits.o $(VERSION)

#prog_limits.o: limits.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog_limits.o limits.cpp $(VERSION)

#main: main prog_decimal_to_binary.o
#	$(CXX) $(FLAGS) $(OBJ) main prog_decimal_to_binary.o $(VERSION)

#prog_decimal_to_binary.o: decimal_to_binary.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) prog_decimal_to_binary.o decimal_to_binary.cpp $(VERSION)

clean:
	rm $(RM_OBJS)

