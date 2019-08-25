CXX = clang++
FLAGS = -Wall -g
VERSION = -std=c++1y
LIB = -stdlib=libc++
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* .*.swp

main: main unions.o
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main unions.o 
unions.o: unions.cpp
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) unions.o unions.cpp

#main: main structure_book.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main structure_book.o 
#structure_book.o: structure_book.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) structure_book.o structure_book.cpp

#main: main string_raw.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main string_raw.o 
#string_raw.o: string_raw.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) string_raw.o string_raw.cpp

#main: main string_line_input.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main string_line_input.o 
#string_line_input.o: string_line_input.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) string_line_input.o string_line_input.cpp

#main: main string_chars_operations.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main string_chars_operations.o 
#string_chars_operations.o: string_chars_operations.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) string_chars_operations.o string_chars_operations.cpp

#main: main string.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main string.o 
#string.o: string.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) string.o string.cpp

#main: main numeric_string_input.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main numeric_string_input.o 
#numeric_string_input.o: numeric_string_input.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) numeric_string_input.o numeric_string_input.cpp

#main: main cstring_3_getline.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main cstring_3_getline.o 
#cstring_3_getline.o: cstring_3_getline.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) cstring_3_getline.o cstring_3_getline.cpp

#main: main cstring_3_get.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main cstring_3_get.o 
#cstring_3_get.o: cstring_3_get.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) cstring_3_get.o cstring_3_get.cpp

#main: main cstring_2.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main cstring_2.o 
#cstring_2.o: cstring_2.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) cstring_2.o cstring_2.cpp

#main: main cstring.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main cstring.o 
#cstring.o: cstring.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) cstring.o cstring.cpp

#main: main array.o
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main array.o 
#array.o: array.cpp
#	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(OBJ) array.o array.cpp

clean:
	rm $(RM_OBJS)

