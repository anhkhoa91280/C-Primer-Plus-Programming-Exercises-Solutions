/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190802
 * Desc: This program shows universial characters using ISO 10646
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
//#include <unistr.h>

int main() {
	int k\u00F6rper;
	std::cout << "Let them eat g\u00E2teau. \U0000222B\n";
	std::cout << "\u00E4" << std::endl;

	/*char16_t c1 = u'q';
	char32_t c2{U'\U0000222B'};

	std::cout << "c1: " << c1 << std::endl;*/
}
