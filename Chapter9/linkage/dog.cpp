#include "dog.h"
#include <iostream>
#include <string>

std::string butter = "Butter"; //static duration, external linkage
static std::string bone = "Bone"; //static duration, internal linkage

void bark() { 
	char name[] = "Baade"; //automatic variable: cease to exist when the function 
							//invocation ends.
	static int age = 5;	//static variable: static duration, no linkage.
	std::cout << "Dog " << name << " is barking" << std::endl;
	std::cout << "He's only " << age << " years old" << std::endl;
	std::cout << R"+*("And he's a very big boy")+*" << std::endl;
}

void eat_bone() {
	std::cout << "Dog is eating " << bone << " and " << butter << std::endl; 
}
