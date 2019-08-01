/*
Name: Dang Nguyen Anh Khoa
Date: 20190724

Desc: This program shows how integer types are treated in a C++ system.

1. Sam and Sue both have $32767
2. Add $1 to both accounts. Sue now has $32768, but Sam has -$32768.
	Reason: 
		32767 in binary 2's compliment system is expressed as 0111 1111 1111 1111
		32767 + 1 in binary is calculated and come up as 1000 0000 0000 0000
		1000 0000 0000 0000 is -32768
		Please refer to 2's compliment number system
3. Reset both accounts to have $0
4. Subtract both accounts by 1
5. Sam now has -1 which is correct becasue his acc type is unsigned thus can accomodate 
	negative integers
6. Sue now has $65535, which is incorect
	Reason:
	0 expressed in binary as :  0000 0000 0000 0000
	-1 expressed in binary as : 1111 1111 1111 1111
	Adding these 2 numbers you get: 1111 1111 1111 1111 (which is 65535 in an unsiged variable)

	Ref: C++ Primer Plus - 6th Edition
*/

#include <iostream>
constexpr short ZERO = 0;

int main() {
	short sam{SHRT_MAX};
	unsigned short sue = sam;

    std::cout << "Sam has $" << sam << std::endl;
    std::cout << "Sue has $" << sue << std::endl;
    
	std::cout << "\nNow add $1 to each account" << std::endl;
	sam++;
	sue++;

    std::cout << "Now Sam has $" << sam << std::endl;
    std::cout << "Now Sue has $" << sue << std::endl;

	std::cout << "\nReset both account to have $0" << std::endl;
	sam = sue = ZERO;
    std::cout << "Sam has $" << sam << std::endl;
    std::cout << "Sue has $" << sue << std::endl;

	std::cout << "\nAfter that subtract 1 in each account";
	sam--;
	sue--;

    std::cout << "Now Sam has $" << sam << std::endl;
    std::cout << "Now Sue has $" << sue << std::endl;
	std::cout << std::endl;
}
