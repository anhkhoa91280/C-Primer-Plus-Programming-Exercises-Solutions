/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190905
 * Desc: This program shows Expressions in C++
 * 	Assignment expression has value to the left end
 * 	Arithmetic expressions have values of production, quotation, sum, etc.
 * 	Comparison expressions have true or false value
 * */
#include <iostream>

int main() {
	int x;

	std::cout << R"+*(The expression "x=10" has the value: )+*";
	std::cout << (x = 10) << std::endl;

	//C++ translates boolean value to integer as 0: false, 1: true
	std::cout << R"+*(The expression "x < 5" has the value: )+*";
	std::cout << (x < 5) << std::endl;

	std::cout << R"+*(The expression "x >= 5" has the value: )+*";
	std::cout << (x >= 5) << std::endl;

	//setf instructs cout to display boolean values as true/false
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << R"+*(The expression "x < 5" has the value: )+*";
	std::cout << (x < 5) << std::endl;

	std::cout << R"+*(The expression "x >= 5" has the value: )+*";
	std::cout << (x >= 5) << std::endl;

	return 0;
}
