/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190914
 * Desc: This program shows the use of logical OR operator in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	char c;

	std::cout << "This program may reformat you hard disk"
		" and reformat all of your data."
		" Do you wish to continue? ";
	std::cin >> c;

	if ( 'y' == c || 'Y' == c )
		std::cout << "You were warned.\a\a" << std::endl;
	else if ( 'n' == c || 'N' == c )
		std::cout << "You've made a wise choice " << std::endl;
	else
		std::cout << R"+*(It wasn't a "y" or "n". I'll trash your disk anyway)+*" 
			<< std::endl;

	return 0;
}
