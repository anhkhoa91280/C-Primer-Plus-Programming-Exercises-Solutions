/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190929
 * Desc: This program illustrates recursive function calls in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

void recursive(int n);
int main() {
	int n;
	std::cout << "Enter a number for counting down: ";
	std::cin >> n;
	recursive(n);
	return 0;
}
void recursive(int n) {
	std::cout << "Counting down...at " << n << " with address: " << &n
		<< std::endl;
	if( n > 0 )
		recursive(n-1);
	std::cout << "Boom...at " << n << " with address: " << &n << std::endl; 
}
