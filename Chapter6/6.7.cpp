/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190921
 * Desc: This program reads input from user, counts number of terms begin with 
 * 	vowels, number of terms begin with consonants, and others.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

bool is_vowel( char c );
const int MAX = 50;
int main() {
	char w[MAX];
	int cnt_vowels = 0;
	int cnt_consonants = 0;
	int others = 0;
	std::cout << "Enter some words terminating with a single q: " << std::endl;

	while ( std::cin >> w && strcmp(w,"q") != 0 ) {
		std::cin.get();
		if ( w[0] == '\n' )
			continue;
		if ( isalpha(w[0]) ) {
			if ( is_vowel (w[0]) )
				++cnt_vowels;
			else
				++cnt_consonants;
		} else
			++others;
	}
	std::cout << cnt_vowels << " words beginning with vowels." << std::endl; 
	std::cout << cnt_consonants << " words beginning with consonants." 
		<< std::endl;
   	std::cout << others << " others" << std::endl;	

	return 0;
}
bool is_vowel( char c ) {
	bool r = false;
	switch (c) {
		case 'a': case 'A':
		case 'e': case 'E':
		case 'i': case 'I':
		case 'o': case 'O':
		case 'u': case 'U':
		case 'y': case 'Y':	
			r = true;
			break;
		default: 
			r = false;
			break;		
	}
	return r;
}
