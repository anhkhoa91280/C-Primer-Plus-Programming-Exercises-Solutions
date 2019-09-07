/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190907
 * Desc: This program shows string comparison for C++ string
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	std::string word = "?ate";

	for ( char c = 'a'; word != "mate"; word[0] = c++ )
		std::cout << word << std::endl;
	std::cout << "After loop, word is: " << word << std::endl;

	return 0;
}
