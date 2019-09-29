/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190929
 * Desc: This program asks for your favourite Chinese zodiac years then displays 
 * 	them again on the screen.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

const int MAX = 5;
void print_str(const std::string * s, int n);
int main() {
	std::string s[MAX];
	int n = 0;

	std::cout << "Please enter " << MAX << " favourite Chinese zodiac signs."
		<< std::endl;

	while ( n < MAX )	{
		std::cout << "Please enter sign #" << n+1 << ": ";
		getline(std::cin, s[n++]);
	}
	print_str(s, MAX);

	return 0;
}
void print_str(const std::string * s, int n) {
	for ( int i=0; i<n; ++i )
		std::cout << s[i] << std::endl;
}
