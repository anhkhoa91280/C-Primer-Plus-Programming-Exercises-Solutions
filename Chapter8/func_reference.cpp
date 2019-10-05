/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191005
 * Desc: This program illustrate pass-by-reference in C++
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

void swapv(int x, int y);
void swapr(int & x, int & y);
void swapp(int * x, int * y);
int main() {
	int a = 1;
	int b = 2;

	std::cout << "Before swapping" << std::endl;
	std::cout << "a=" << a << ", b=" << b << std::endl;

	std::cout << "Swapping with pass-by-ref" << std::endl;
	swapr(a,b);
	std::cout << "a=" << a << ", b=" << b << std::endl;

	std::cout << "Swapping with pass-by-pointer" << std::endl;
	swapp(&a,&b);
	std::cout << "a=" << a << ", b=" << b << std::endl;

	std::cout << "Swapping with pass-by-value" << std::endl;
	swapv(a,b);
	std::cout << "a=" << a << ", b=" << b << std::endl;

	return 0;
}
void swapv(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
void swapr(int & x, int & y) {
	int temp = x;
	x = y;
	y = temp;
}
void swapp(int * x, int * y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
