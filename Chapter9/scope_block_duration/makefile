CXX = clang++
LIB = -stdlib=libc++
VERSION = -std=c++1y
FLAGS = -Wall -g
COMPILE = -c
OBJ = -o
RM_OBJS = *.o .* *.swp main
FILE = rectangle

default: main
main: main $(FILE).o $(FILE)_main.o
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(OBJ) main $(FILE).o $(FILE)_main.o
$(FILE)_main.o: $(FILE)_main.cpp
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(FILE)_main.cpp
$(FILE).o: $(FILE).cpp $(FILE).h
	$(CXX) $(FLAGS) $(VERSION) $(LIB) $(COMPILE) $(FILE).cpp

clean:
	rm $(RM_OBJS)
