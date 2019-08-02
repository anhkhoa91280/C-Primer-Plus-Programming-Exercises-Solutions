/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190802
 * Desc: This program shows how to use escape sequence to display special characters
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int code;
	//backspace \b will move cursor back (to under score potion)
	std::cout << "Enter your id: ______\b\b\b\b\b\b";
	std::cin >> code;
	std::cout << "You have entered " << code << std::endl;

	return 0;
}
