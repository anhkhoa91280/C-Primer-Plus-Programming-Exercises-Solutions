/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190816
 * Desc: This program shows string in C++
 * Reference: C++ Primer Plus, 6th Edition
 * */
#include <iostream>

int main() {
	//not a string
	char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string!
	//the following might print different unexpected results on different runs
	std::cout << dog << std::endl;

	// a string which ends with a null terminator '\0'
	char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};  
	std::cout << cat << std::endl;

	char shirt_size = 'S';
	std::cout << shirt_size << std::endl;
	std::cout << static_cast<int>(shirt_size) << std::endl;

	char pants_size[] = "S";
	std::cout << pants_size << std::endl;
	//the following won't work because "S" is not a character
	//std::cout << static_cast<int>(pants_size) << std::endl;

	return 0;
}
