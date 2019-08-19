CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* .*.swp

main: main string_line_input.o
	$(CXX) $(FLAGS) $(OBJ) main string_line_input.o $(VERSION)
chartype.o: string_line_input.cpp
	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) string_line_input.o string_line_input.cpp $(VERSION)

#main: main string_chars_operations.o
#	$(CXX) $(FLAGS) $(OBJ) main string_chars_operations.o $(VERSION)
#chartype.o: string_chars_operations.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) string_chars_operations.o string_chars_operations.cpp $(VERSION)

#main: main string.o
#	$(CXX) $(FLAGS) $(OBJ) main string.o $(VERSION)
#chartype.o: string.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) string.o string.cpp $(VERSION)

#main: main numeric_string_input.o
#	$(CXX) $(FLAGS) $(OBJ) main numeric_string_input.o $(VERSION)
#chartype.o: numeric_string_input.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) numeric_string_input.o numeric_string_input.cpp $(VERSION)

#main: main cstring_3_getline.o
#	$(CXX) $(FLAGS) $(OBJ) main cstring_3_getline.o $(VERSION)
#chartype.o: cstring_3_getline.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) cstring_3_getline.o cstring_3_getline.cpp $(VERSION)

#main: main cstring_3_get.o
#	$(CXX) $(FLAGS) $(OBJ) main cstring_3_get.o $(VERSION)
#chartype.o: cstring_3_get.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) cstring_3_get.o cstring_3_get.cpp $(VERSION)

#main: main cstring_2.o
#	$(CXX) $(FLAGS) $(OBJ) main cstring_2.o $(VERSION)
#chartype.o: cstring_2.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) cstring_2.o cstring_2.cpp $(VERSION)

#main: main cstring.o
#	$(CXX) $(FLAGS) $(OBJ) main cstring.o $(VERSION)
#chartype.o: cstring.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) cstring.o cstring.cpp $(VERSION)

#main: main array.o
#	$(CXX) $(FLAGS) $(OBJ) main array.o $(VERSION)
#chartype.o: array.cpp
#	$(CXX) $(FLAGS) $(COMPILE) $(OBJ) array.o array.cpp $(VERSION)

clean:
	rm $(RM_OBJS)

