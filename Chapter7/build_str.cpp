/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190928
 * Desc: This program builds string from a number of repeated characters
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream> 

char * build(char c, int n);
int main() {
	char * s;
	char c;
	int n;

	std::cout << "Enter a character: ";
	std::cin >> c;
   	std::cout << "Enter a number: ";	
	std::cin >> n;
	
	s = build(c, n);
	std::cout << s << std::endl;
	delete [] s;
	s = build('+', 20);
	std::cout << s << "-DONE-" << s << std::endl;
	delete [] s;

	return 0;
}
char * build(char c, int n) {
	char * s = new char[n+1];
	int i;

	for ( i=0; i<n; ++i )
		s[i] = c;

	s[n] = '\0';

	return s;
}
