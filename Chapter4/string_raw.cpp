/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190820
 * Desc: This program show C++11 raw string
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main(){
	std::cout << R"(This is a Raw string in C++11 where \n is not endl)" 
		<< std::endl;
	std::cout << R"(Special chararacters like " ' (, etc 
					don't need escape character \)" 
		<< std::endl;
	std::cout << R"+*(What's RSA (An encryption technique) used for?)+*" 
		<< std::endl;
	return 0;
}
