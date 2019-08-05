/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190804
 * Desc: This program show floating point types: float, double; their significant bits;
 * 	how to write them in Mantissa & Exponential. The program also presents you possibile
 * 	trade-off between size in memory and precision between float and double types 
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	//setf sets cout to display 6 fractional numbers
	//This line is essential for displaying floating point numbers with 
	//mantissa and exponent
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

	double num0 = 1.6e+6;
	double num1 = 1.6e-6;
	double num2 = -1.6e-6;
	std::cout << "Can use e or E, with or without + sign, etc" << std::endl;
	std::cout << "Some examples of floating point numbers: " << std::endl;
	std::cout << " 1.6e+6 = " << num0 << std::endl;
	std::cout << "1.6e-6 = " << num1 << std::endl;
	std::cout << "-1.6e-6 = " << num2 << std::endl;
	
	std::cout << std::endl;

	float f_num = 10.0/3.0;
	double d_num = 10.0/3.0;
	const auto mil = 1.0e6;

	std::cout << "float number is: " << f_num << std::endl;
	//The following will NOT output fractional part correctly since float 
	//is only good for 6 significant figures
	std::cout << "float number times a mil is: " << f_num*mil << std::endl;
	std::cout << "float number times ten mil is: " << 10*f_num*mil;
	std::cout << " (This even diverges more from correct value)" << std::endl;

	std::cout << std::endl;

	
	std::cout << "double number is: " << d_num << std::endl;
	//The following will output fractional part correctly since double 
	//is good for 15 significat figures
	std::cout << "double number times a mil is: " << d_num*mil << std::endl;

	return 0;
}
