/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190928
 * Desc: This program counts number of specific characters in a string
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

unsigned int c_in_str(const char * s, char c);
int main() {
    char mm[15] = "minimum";
    const char * wail = "ululate";
    
    std::cout << "There are " << c_in_str(mm, 'm') 
	   << R"+*( "m" characters in )+*" << mm << std::endl;	
    std::cout << "There are " << c_in_str(wail, 'u') 
	   << R"+*( "u" characters in )+*" << wail << std::endl;	
    
	return 0;
}
unsigned int c_in_str(const char * s, char c) {
	unsigned int cnt = 0;
	
	while(*s) {
		if ( *s == c )
			++cnt;
		++s;
	}
	return cnt;
}
