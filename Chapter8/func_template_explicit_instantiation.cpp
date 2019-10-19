/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20101019
 * Desc: This program illustrates the use of explicit instantiation.
 *
 *	#2 was defined before its first use in main() so #2 acts as a prototype as well.
 *	Explicit instantiation: Explicitly converts the type of the argument to be the
 *	type that the client needs.
 *
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
//#1
template<class T>T min(T a, T b) {
	return a < b ? a : b;
}
//#2
int min(int a, int b) {
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}
int main() {
	int a = 20;
	int b = -30;
	double x = 20.5;
	double y = 15.5;

	std::cout << min(a, b) << std::endl; 		//#1

	std::cout << min(x, y) << std::endl; 		//#2 for double
	
	//the <> indicates that the compiler should use the function instantiated from
	//the template rather than the ordinary function.
	std::cout << min<>(a, b) << std::endl; 		//#2 for int

	//the <int> requests the compiler to explicitly instantiates a function with 
	//int substitute for T, that's why you would see the result 15 instead of 15.5
	std::cout << min<int>(x, y) << std::endl; 	//#2 for int

	return 0;
}
