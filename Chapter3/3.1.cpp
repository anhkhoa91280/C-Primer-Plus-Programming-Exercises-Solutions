/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190812
 * Desc: This program converts height in inches to feet & inches
 * 	It uses underscore for user to enter an integer as input value for inches
 * 	It uses const to represent the conversion factor
 * Reference: C++ Primer Plus - 6th edition
 * */
#include <iostream>

int main() {
	int height;
	const int factor = 12;
	std::cout << "Enter your height in inches: _____\b\b\b\b\b";
	std::cin >> height;
	std::cout << "You are " << height/factor << " feet" << " and " << height%factor
		<< " inches" << std::endl;
	return 0;
}

