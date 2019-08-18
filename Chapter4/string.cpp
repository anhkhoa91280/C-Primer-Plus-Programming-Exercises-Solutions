/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190818
 * Desc: This program shows string class in C++ with string assignment, concatenation,
 * appending
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main() {
	//String initialization
	std::string first_name = "Khoa";
	std::string last_name = "Dang";
	//String concatenation
	std::string full_name = first_name + " " + last_name;

	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Full name: " << full_name << std::endl;

	//Appending string
	full_name += " Senior";
	std::cout << "Full name: " << full_name << std::endl;

	//Concatenate c-string to string is possible
	std::string address = "Hanoi, Vietnam";
	char separators[20] = "<<<>>>";
	std::string info = full_name + separators + address;

	std::cout << "Info: " << info << std::endl;

	return 0;
}
