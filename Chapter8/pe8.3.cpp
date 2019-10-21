/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191021
 * Desc: 
 * Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.
	Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
#include <string>
#include <cctype>

void to_upper(std::string &);
int main() {
	std::string text;

	std::cout << "Enter some text, or q to quit: ";
	getline(std::cin, text);

	while ( text != "q" && text != "Q" ) {
		to_upper(text);
		std::cout << text << std::endl;
		std::cout << "Other text, or q to quit: ";
		getline(std::cin, text);
	}

	return 0;
}
void to_upper(std::string & s) {
	int len = s.size();
	std::cout << len << std::endl;

	for ( int i=0; i<len; ++i ) {
		if ( isalpha(s[i]) )
			if ( islower(s[i]) )
				s[i] = toupper(s[i]);
	}
}
