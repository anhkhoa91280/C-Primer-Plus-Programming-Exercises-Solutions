/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190818
 * Desc: This program shows assignment, concatenation, and size operations on c-style
 * 	string, and C++ string object
**/
#include <iostream>
#include <cstring>
#include <string>

int main() {
	const int SIZE = 20;
	char c_arr01[SIZE] = "feline";
	char c_arr02[SIZE];
	std::string s_tiger;
	std::string siberian = "Siberian";
	std::string sumatran = "Sumatran";

	//Assignment in C-style string
	std::strcpy(c_arr02, c_arr01);
	std::cout << c_arr02 << std::endl;

	//Assignment in C++ string object
	s_tiger = c_arr02; 
	std::cout << s_tiger << std::endl;

	//Appending in C-style string
	std::strcat(c_arr02, " lion");
	std::cout << c_arr02 << std::endl;
    
	//Appending in C++ string object
    s_tiger +=  " tiger";
    std::cout << s_tiger << std::endl;

	//Finding size in C-style string
	std::cout << std::strlen(c_arr02) << std::endl;

	//Finding size in C++ string object
	std::cout << s_tiger.size() << std::endl;

	return 0;
}
