/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190917
 * Desc: This program shows cctypes char function such as isdigit(), isalpha(),
 * 	isspace(), ispunct(), etc.
 * Test text:
 * AdrenalVision International producer Adrienne Vismonger
announced production of their new 3-D film, a remake of
"My Dinner with Andre," scheduled for 2013. "Wait until
you see the the new scene with an enraged Collossipede!"@	
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <cctype>

int main() {
	char c;
	int cnt_digit = 0;
	int cnt_alpha = 0;
	int cnt_space = 0;
	int cnt_punct = 0; 
	int others = 0;

	std::cout << "Enter some characters, terminate by @ " << std::endl;
	std::cin.get(c);

	while ( c != '@' ) {
		if ( isdigit(c) )
			++cnt_digit;
		else if ( isalpha(c) )
			++cnt_alpha;
		else if ( isspace(c) )
			++cnt_space;
		else if ( ispunct(c) )
			++cnt_punct; 
		else
			++others;
		std::cin.get(c);
	}

	std::cout << cnt_digit << " digits" << std::endl;
	std::cout << cnt_alpha << " letters" << std::endl;
	std::cout << cnt_space << " white spaces" << std::endl;
	std::cout << cnt_punct << " punctuations" << std::endl;
	std::cout << others << " others" << std::endl;


	return 0;
}
