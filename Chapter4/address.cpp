/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190824
 * Desc: This program shows how to get memory address of variables
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int d = 20;
	int e = d;
	//use "address" operator &
	std::cout << "d's value " << d << std::endl;
	std::cout << R"+*(d's memory address: )+*" << &d << std::endl; 
	std::cout << "e's value " << e << std::endl;
	std::cout << R"+*(e's memory address: )+*" << &e << std::endl; 
	std::cout << R"+*(e copies value 20 from d so they share the same value
 but they don't share the same address in memory)+*" << std::endl; 
	return 0;
}
