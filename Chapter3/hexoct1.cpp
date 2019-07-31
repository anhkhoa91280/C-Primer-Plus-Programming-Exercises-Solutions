/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190731
 * Desc: This program show how C++ accommodate integer literals in different
 * number systems such as Decimal, Octal, Hexadecimal
 * Any number starting with 0 and followed by digits in range 0-7 is octal
 * Any number starting with 0x or 0X is hexadecimal
 * By default, cout display integer literal in decimal
 * */
#include <iostream>

int main() {
	unsigned int dec = 42;
	unsigned int oct = 042;
	unsigned int hex = 0x42;

	std::cout << "dec = " << dec << std::endl;
	std::cout << "oct = " << oct << " (042 as octal)" << std::endl;
	std::cout << "hex = " << hex << " (0x42 as hexadecimal)" << std::endl;

	return 0;
}
