/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191020
 * Desc: This program shows template with multiple params.
 * Reference: C++ Primer Plus - 6th Edition
 *
 * Note: The return type of circumferrence() is not known at the point of
 * declaration because x & y have not been declared at that poin. So we use the
 * placeholder 'auto' for the return type, and 'auto' will deduce the type from
 * the expression x+y (using decltype).
 * */
#include <iostream>

template<class T1, class T2> 
auto circumferrence(T1 x, T2 y) -> decltype(x+y);
int main() {
	std::cout << "Circumferrence of rectangle 1: " << circumferrence(4, 5) 
		<< std::endl;
	std::cout << "Circumferrence of rectangle 2: " << circumferrence(4.5, 5.3) 
		<< std::endl;
	std::cout << "Circumferrence of rectangle 3: " << circumferrence(4.7, 9) 
		<< std::endl;
	return 0;
}
template<class T1, class T2> 
auto circumferrence(T1 x, T2 y) -> decltype(x+y) {
	typedef decltype(x+y) xpy;
	xpy c = 2*(x+y);
	return c;
}
