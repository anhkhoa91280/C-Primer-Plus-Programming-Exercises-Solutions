#include "dog.h"
#include "cat.h"
#include <iostream>

//This is a Referencing Declaration using the keyword 'extern'
//where it refers to an existing variable.
extern std::string butter;

int main() {
	bark();
	meow();
	eat_bone();
	eat_fish();
	return 0;
}
