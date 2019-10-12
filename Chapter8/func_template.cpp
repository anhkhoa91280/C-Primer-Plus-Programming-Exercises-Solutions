/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191011
 * Desc: This program shows function template in C++. During runtime a function
 * 	definition will be generated accordingly to the argument list of the calling 
 * 	function.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

template<class T>
void swap(T & x, T & y);
template<class T>
void display(const T x, const T y);
int main() {
	int a, b;
	double c, d;

	std::cout << "Enter 2 integers: ";
	std::cin >> a >> b;
	std::cout << "Before swapping integers: " << std::endl;
	display(a, b);
	swap(a,b);
	std::cout << "After swapping integers: " << std::endl;
	display(a, b);
		
	std::cout << "Enter 2 fractional numbers: ";
	std::cin >> c >> d;
	std::cout << "Before swapping factional numbers: " << std::endl;
	display(c, d);
	swap(c,d);
	std::cout << "After swapping factional numbers: " << std::endl;
	display(c, d);
	return 0;
}
template<class T>
void swap(T & x, T & y) {
	T temp = x;
	x = y;
	y = temp;
}
template<class T>
void display(const T x, const T y) {
	std::cout << x << "\t" << y << std::endl;
}
