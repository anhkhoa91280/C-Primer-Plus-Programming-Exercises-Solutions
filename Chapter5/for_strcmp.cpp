/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190907
 * Desc: This program shows comparisons between c-style string and character
 * Referenc: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	char word[10] = "?ate";

	for( char c = 'a'; strcmp(word, "mate"); word[0] = c++ )
		std::cout << word << std::endl;
	std::cout << "After loop, word is " << word << std::endl;
	
	return 0;
}
