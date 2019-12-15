CXX = clang++
VERSION = -std=c++1y
LIB = -stdlib=libc++
FLAGS = -Wall -g
RM_OBJS = *.o *.swp .swap.*
FILE = external_internal_linkage

default: main
main: main $(FILE).o Dog.o Cat.o
	$(CXX) $(VERSION) $(LIB) $(FLAGS) -o main $(FILE).o Dog.o Cat.o
Dog.o: Dog.cpp Dog.h
	$(CXX) $(VERSION) $(LIB) $(FLAGS) -c Dog.cpp
Cat.o: Cat.cpp Cat.h
	$(CXX) $(VERSION) $(LIB) $(FLAGS) -c Cat.cpp
$(FILE).o: $(FILE).cpp
	$(CXX) $(VERSION) $(LIB) $(FLAGS) -c $(FILE).cpp

clean: rm $(RM_OBJS)



