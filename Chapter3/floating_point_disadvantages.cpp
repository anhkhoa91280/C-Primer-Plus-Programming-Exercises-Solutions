/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190806
 * Desc: This program shows that you attempt to add 1 to the 23rd digit but float 
 * represents only 6 or 7 digits in a number, thus the attempt fails
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	float a = 2.34e+23f;
	float b = a + 1.0f;

	std::cout << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "And, b-a = " << b-a << std::endl;
	std::cout << "\nAdding 1 to the 23rd digit of 'a' has no effect because 'a' ";
	std::cout << "only repesents up to 6 or 7 digits. Thus, a = b" << std::endl;
	std::cout << std::endl;

	return 0;
}
