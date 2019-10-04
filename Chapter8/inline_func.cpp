/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191005
 * Desc: This program illustrates inline function which is 'inline' with other code
 * 	in the program so that it saves time of jumping back and forth b/w other code
 * 	and function location.
 * Reference: C++ Primer Plus - 6th Edition	 
 * */
#include <iostream>

inline double square(double x) { return x*x; }
int main() {
	double a,b;
	double c = 13.0;

	a = square(5);
	b = square(4.5+7.5);

	std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
	std::cout << "Square of c: " << square(c++) << std::endl;
	std::cout << "c is now: " << c << std::endl;

	return 0;
}
