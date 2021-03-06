/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190908
 * Desc: This program takes input from the user, counts number of characters
 * 	until user hits # character, and displays the characters entered
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

int main() {
	char c;
	int cnt = 0;
	std::cout << "Enter characters, enter # to escape the program: ";
	std::cin >> c;

	//characters that you enter  are buffered and don't get sent 
	//to the program until you hit enter
	//that's why you can type more characters after the #
	//whitespace characters will be ommited by std::cin
	while ( c != '#' ) {
		cnt++;
		std::cout << c;
		std::cin >> c;
	}
	std::cout << std::endl;
	std::cout << cnt << " characters were entered" << std::endl;

	return 0;
}
