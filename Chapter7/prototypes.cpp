/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190922
 * Desc: This program shows function prototypes in C++. Protype is used for 
 * 	compiler to know the function arguments and return type so that it knows
 * 	how many bytes to expect and how to interpret them. It's efficient to use
 * 	prototypes instead of scanning through the file looking for function definition
 * 	or even worse if function definition is in another file which can be compiled
 * 	and linked later.
 * Reference: C++ Primer Plus - 6th Edition 
 * */
#include <iostream>

void cheers(int n); //without return value
double cube(double n); // with return value
int main() {
	double n;

	cheers(5);
	std::cout << "Enter a number: ";
	std::cin >> n;
	std::cout << "A " << n << "-foot cube has the volume of " << cube(n)
		<< std::endl;
	cheers(cube(2));

	return 0;
}
void cheers(int n) {
	for ( int i=0; i<n; ++i )
		std::cout << "Cheers! ";
	std::cout << std::endl;
}
double cube(double n) {
	return n*n*n;
}
