#include "dog.h"
#include <iostream>
#include <string>

std::string butter = "butter"; //static duration, external linkage : available in the
								//Cat Translation Unit and external_internal 
								//Translation Unit as well.
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
