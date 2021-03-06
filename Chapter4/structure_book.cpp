/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190821
 * Desc: This program shows structure in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

struct book {
	std::string name;
	std::string isbn;
    double price;
};
int main() {
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    book cpp;
    book java;   
	book python { "Python for AI", "56789poiuy", 25.8e3};
	//assignment just like any other data type
	book another_python = python;

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
	std::cout << std::endl;

	std::cout << "Python book details: " << std::endl;
	std::cout << "Name: " << python.name << std::endl;
	std::cout << "ISBN: " << python.isbn << std::endl;
	std::cout << "Price: " << python.price << std::endl;
	std::cout << std::endl;

	std::cout << "Another python book details: " << std::endl;
	std::cout << "Name: " << another_python.name << std::endl;
	std::cout << "ISBN: " << another_python.isbn << std::endl;
	std::cout << "Price: " << another_python.price << std::endl;
	std::cout << std::endl;

	std::cout << "Total amount: " << static_cast<int>(cpp.price + 
		java.price + python.price + another_python.price) << std::endl;

	//array of structures
	book other_programming_books[] = {
		{ "C# in 21 days", "123890poiqwe", 78.24e3 },
		{ "Advanced java script", "asdf;lkhjh", 45.5e4 }
	};
	std::cout << other_programming_books[1].price << std::endl;

    return 0;
}
