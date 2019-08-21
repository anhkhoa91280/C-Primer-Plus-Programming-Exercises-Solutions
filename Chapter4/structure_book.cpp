/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190821
 * Desc: This program shows structure in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

struct book {
	std::string name;
	std::string isbn;
    double price;
};
int main() {
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    book cpp;
    book java;   
	
	cpp.name = R"+*(C++ Primer Plus)+*";
	cpp.isbn = R"+*(80841867jkljf)+*";
	cpp.price = 1.35e+6;
	std::cout << "C++ book details: " << std::endl;
	std::cout << "Name: " << cpp.name << std::endl;
	std::cout << "ISBN: " << cpp.isbn << std::endl;
	std::cout << "Price: " << cpp.price << std::endl;
	std::cout << std::endl;

	java.name = R"+*(Java for Android development)+*";
	java.isbn = R"+*(09876123456qwerty)+*";
	java.price = 1.26e+4;
	std::cout << "Java book details: " << std::endl;
	std::cout << "Name: " << java.name << std::endl;
	std::cout << "ISBN: " << java.isbn << std::endl;
	std::cout << "Price: " << java.price << std::endl;

    return 0;
}
