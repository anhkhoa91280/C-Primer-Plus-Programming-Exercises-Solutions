/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190810
 * Desc: This program shows loss of precision when converting from types with
 * 	fractional part to types without fractional parts.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	float tree = 3; // int converted to float
	int guess(3.9832); // double converted to int, fractional part will be lost
	int debt = 7.2E12; // result not defined in C++, incorrect number will be 
						//printed because int size is 4 bytes and cannot hold such 
						//a large number as 7.2e1
	long asset = 7.2e12;
	std::cout << "tree = " << tree << std::endl;
	std::cout << "guess = " << guess << std::endl;
	std::cout << "size of debt: " << sizeof(debt) << std::endl;
	std::cout << "debt = " << debt << std::endl;
	std::cout << "size of asset: " << sizeof(asset) << std::endl;
	std::cout << "asset = " << asset << std::endl;
	return 0;
}
