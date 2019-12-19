#include "cat.h"
#include <iostream>
#include <string>

extern std::string butter;
static std::string fish = "Fish";

void meow() { 
	std::cout << "Cat is meowing" << std::endl;
}

void eat_fish() {
	std::cout << "Cat is eating " << fish << " and " << butter << std::endl; 
}
