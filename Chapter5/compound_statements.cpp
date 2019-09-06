/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190906
 * Desc: This program shows compound statements (statements in a block)
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int a = 10;
	
	std::cout << "a outside the block = " << a << std::endl;
	{
		int a = 5;
		int b = 20;
		std::cout << "a inside the block = " << a << std::endl;
		std::cout << "b inside the block = " << b << std::endl;
	}

	std::cout << "a outside the block again = " << a << std::endl;
	//the following piece of code won't compile because b is declared in the 
	//block and it's not available outside the block
	//std::cout << "b outside the block = " << b << std::endl;

	return 0;
}
