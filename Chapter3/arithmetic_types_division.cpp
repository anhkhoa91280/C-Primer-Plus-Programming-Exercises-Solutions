/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190807
 * Desc: This program shows division using different arithmetic types (int, float,
 * doulbe, etc)
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main()
{
	std::cout << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "Integer division: 9/5 = " << 9 / 5 << std::endl;
	std::cout << "Floating-point division: 9.0/5.0 = ";
	std::cout << 9.0 / 5.0 << std::endl;
	std::cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << std::endl;
	std::cout << "double constants: 1e7/9.0 = ";
	std::cout << 1.e7 / 9.0 << std::endl;
	std::cout << "float constants: 1e7f/9.0f = ";
	std::cout << 1.e7f / 9.0f << std::endl;
	std::cout << std::endl;

	return 0;
}
