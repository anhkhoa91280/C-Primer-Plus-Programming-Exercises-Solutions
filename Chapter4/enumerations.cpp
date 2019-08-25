/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190825
 * Desc: This program shows Enumerations. Default enumeration values are type
 * 	int, but in latest C++ they can be of types long or long long.
 * 	Enumerations are used to define a set "related" symbolic contants 
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

//account types are limited to only 3 types
enum acc_types {saving = 0, debit = 100, credit};
int main() {
	acc_types my_acc = credit;
	std::cout << "Saving: " << my_acc << std::endl;
	return 0;
}
