/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190731
 * Desc: This program show how C++ accommodate integer literals in different
 * number systems such as Decimal, Octal, Hexadecimal
 * Any number starting with 0 and followed by digits in range 0-7 is octal
 * Any number starting with 0x or 0X is hexadecimal
 * By default, cout display integer literal in decimal
 *
 * Note: use std::oct and std::hex for displaying the number in octal and hexadecimal 
 * forms.
 * */
#include <iostream>

int main() {
	unsigned int base10 = 42;
	unsigned int base8 = 072;
	unsigned int base16 = 0x15C;

	std::cout << "dec = " << base10 << std::endl;
	std::cout << std::oct;
	std::cout << "oct = " << base8 << " (displayed as octal)" << std::endl;
	std::cout << std::hex;
	std::cout << "hex = " << base16 << " (display as hexadecimal)" << std::endl;

	return 0;
}
