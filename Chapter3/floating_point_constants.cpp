/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190805
 * Desc: This program shows how to store floating point constants in different 
 * types such as float, double, long, etc.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream> 
#define D 234.0
#define F 234.0f
#define LD 234.0L

int main() {
	std::cout << std::endl;
	std::cout << "A float-point constant D defined as 234.0 is default to be double" 		<< std::endl;
	std::cout << "D's size is: " << sizeof(D) << std::endl;

	std::cout << "\nA floating-point constant F defined as 234.0f is a float" 
		<< std::endl;
	std::cout <<"F's size is: " << sizeof(F) << std::endl;

	std::cout << "\nA floating-point constant LD defined as 234.0L is a long doulbe" 
		<< std::endl;
	std::cout <<"LD's size is: " << sizeof(LD) << std::endl;

	std::cout << "\nSo to specifically define type for a constant using directive, ";
	std::cout << "we can use appropriate suffixes" << std::endl;
	std::cout << std::endl;

	return 0;
}
