/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190902
 * Desc: This program shows how to create structures dynamically and how to access
 * 	its member
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

struct student {
	std::string name;
	int age;
};
int main() {
	student * a = new student;
	
	//use membership operator to access structure member
	std::cout << "What's your name: ";
	std::cin >> a->name;
	//dereference the pointer and use the dot operator
	std::cout << "What's your age: ";
	std::cin >> (*a).age;
	
	std::cout << R"+*("Welcome" )+*" << a->name << ", you've just turned " <<
		a->age << std::endl;	

	delete a;
	a = NULL;

	return 0;
}
