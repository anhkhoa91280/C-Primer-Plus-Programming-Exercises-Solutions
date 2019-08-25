/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190822
 * Desc: This program shows union, data structure to instantiate 1 value at a
 * 	time to save place.
 * */
#include <iostream>
#include <string>

const int SIZE = 10;
union book_id {
	int id_num;
	//union must know its size because
	//size of an union is the size of the largest member so
	//data type like std::string can't be used
	//Futhermore, std::sting is of C++ not C whereas union is a
	//C-style data structure
	char id_char[SIZE];
};
struct book {
	book_id id;
	std::string name;
	double price;
};
int main() {
	book cpp;
	book java;

	cpp.id.id_num = 123;
	cpp.name = "C++ for Game Development";
	cpp.price = 23.4;
	std::cout << "id: " << cpp.id.id_num << std::endl;
	std::cout << "name: " << cpp.name << std::endl;
	std::cout << "price: " << cpp.price << std::endl;
	std::cout << std::endl;

	std::strcpy(java.id.id_char, "abc");
	java.name = R"+*(Java for "Android" Development)+*";
	java.price = 12.5;
	std::cout << "id: " << java.id.id_char << std::endl;
	std::cout << "name: " << java.name << std::endl;
	std::cout << "price: " << java.price << std::endl;
	std::cout << std::endl;

	return 0;
}
