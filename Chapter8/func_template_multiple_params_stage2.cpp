/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191020
 * Desc: This program shows function template with multiple params in stage 2 where
 * var is of the same type as the function return type.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
template<class T1, class T2> 
auto circumferrence(T1 x, T2 y) -> decltype(x+y);
int main() {
	int width = 4;
	double height = 5.4;
	decltype(circumferrence(width, height)) area = width*height;

	std::cout << "Circumferrence = " << circumferrence(width, height) << std::endl;
	std::cout << "Area = " << area << std::endl;

	return 0;
}
template<class T1, class T2> 
auto circumferrence(T1 x, T2 y) -> decltype(x+y) {
	return 2*(x+y);
}
