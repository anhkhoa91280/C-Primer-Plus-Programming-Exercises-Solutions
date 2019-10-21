/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191021
 * Desc: A function that takes an address of a string as argument and prints the
 * string 1 once. But if a second argument, type int, is provided and non-zero, the 
 * function should print a number of times equal to the number of times that the
 * function has been called at that point.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

void print(const char * c, int n=0);
const int MAX = 128;
int cnt = 0;
int main() {
	char * w = new char[MAX];

	std::cout << "Enter some text: ";
	std::cin.getline(w, MAX);
	print(w);

	std::cout << "Enter some other text: ";
	std::cin.getline(w, MAX);
	print(w);

	std::cout << "Enter some more text: ";
	std::cin.getline(w, MAX);
	print(w, -1);

	return 0;
}
void print(const char * c, int n) {
	++cnt;
	if (0==n) 
		std::cout << c << std::endl;
	else {
		for ( int i=0; i<cnt; ++i)
			std::cout << c << std::endl;
	}
}
