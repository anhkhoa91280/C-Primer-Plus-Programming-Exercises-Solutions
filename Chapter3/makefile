CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* .*.swp

main: main universial_characters.o
	$(CXX) $(FLAGS) $(OBJ) main universial_characters.o $(VERSION)
chartype.o: universial_characters.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) universial_characters.o universial_characters.cpp $(VERSION)

#main: main escape_sequences.o
#	$(CXX) $(FLAGS) $(OBJ) main escape_sequences.o $(VERSION)
#chartype.o: escape_sequences.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) escape_sequences.o escape_sequences.cpp $(VERSION)

#main: main literals.o
#	$(CXX) $(FLAGS) $(OBJ) main literals.o $(VERSION)
#chartype.o: literals.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) literals.o literals.cpp $(VERSION)

#main: main chartype.o
#	$(CXX) $(FLAGS) $(OBJ) main chartype.o $(VERSION)
#chartype.o: chartype.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) chartype.o chartype.cpp $(VERSION)

#main: main hexoct2.o
#	$(CXX) $(FLAGS) $(OBJ) main hexoct2.o $(VERSION)
#hexoct1.o: hexoct2.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) hexoct2.o hexoct2.cpp $(VERSION)

#main: main hexoct1.o
#	$(CXX) $(FLAGS) $(OBJ) main hexoct1.o $(VERSION)
#hexoct1.o: hexoct1.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) hexoct1.o hexoct1.cpp $(VERSION)

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

