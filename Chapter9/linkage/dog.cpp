#include "dog.h"
#include <iostream>
#include <string>

std::string butter = "Butter"; //static duration, external linkage
static std::string bone = "Bone"; //static duration, internal linkage

void bark() { 
	std::cout << "Dog is barking" << std::endl;
}

void eat_bone() {
	std::cout << "Dog is eating " << bone << " and " << butter << std::endl; 
}
