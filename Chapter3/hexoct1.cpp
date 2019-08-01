/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190731
 * Desc: This program show how C++ accommodate integer literals in different
 * number systems such as Decimal, Octal, Hexadecimal
 * Any number starting with 0 and followed by digits in range 0-7 is octal
 * Any number starting with 0x or 0X is hexadecimal
 * By default, cout display integer literal in decimal
 *
 * Ref: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	unsigned int base10 = 42;
	unsigned int base8 = 042;
	unsigned int base16 = 0x42;

	std::cout << "dec = " << base10 << std::endl;
	std::cout << "oct = " << base8 << " (042 as octal)" << std::endl;
	std::cout << "hex = " << base16 << " (0x42 as hexadecimal)" << std::endl;

	return 0;
}
