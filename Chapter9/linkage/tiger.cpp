/**
 * Name: Dang Nguyen Anh Khoa
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include "tiger.h"
#include <iostream>
#include <string>

//This is a Referencing Declaration using the keyword 'extern'
//where it refers to an existing variable.
extern std::string butter;
void growl() {
	std::cout << "The tiger is growling" << std::endl;
}
void eat_pork() {
	std::cout << "The tiger is eatinng pork and " << butter << std::endl; 
}

