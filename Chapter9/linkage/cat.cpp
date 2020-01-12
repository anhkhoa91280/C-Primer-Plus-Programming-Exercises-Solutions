/**
 * Name: Dang Nguyen Anh Khoa
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include "cat.h"
#include <iostream>
#include <string>

static std::string fish = "Fish";
//This is a Referencing Declaration using the keyword 'extern'
//where it refers to an existing variable.
extern std::string butter;
void meow() { 
	std::cout << "Cat is meowing" << std::endl;
}

void eat_fish() {
	//automatic variable butter override the external butter
	std::string butter = "Peanut butter";
	std::cout << "Cat is eating " << fish << " and " << butter << std::endl; 
}
