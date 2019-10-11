/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191010
 * Desc: This program shows different facet of function overloading in C++
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

void print(long l, int n);
void print(int i, int n);
//the below line of code won't compile because print(long, int) has been declared
//the function return type doesn't matter, the argument list matters
//int print(long l, int n);

int main() {
	//It'd be ambiguous call if n is unsigned int since both print functions can 
	//convert an unsigned int to it's argument type.
	//unsigned int n = 10;
	
	int n = 10;
	int size = 5;

	print(n, size);

	return 0;
}
void print(long l, int n) {
	std::cout << "print(long l, int n)" << std::endl;
}
void print(int i, int n) {
	std::cout << "print(int i, int n)" << std::endl;
}

