/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190802
 * Desc: This program shows universial characters using ISO 10646
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int k\u00F6rper;
	//char hi = \u1ED2;
	std::cout << "Let them eat g\u00E2teau.\n";
	//std::cout << "oo in vietnamese: " << hi << std::endl;
	std::cout << "\u00E4" << std::endl;
}
