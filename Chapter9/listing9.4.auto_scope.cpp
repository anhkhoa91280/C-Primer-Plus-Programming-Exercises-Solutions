/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191208
 * Desc: This program illustrates auto scope in C++
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

void attack(int&);
int main() {
	int sniper = 2000;
	std::cout << "In main, sniper deals " << sniper << " dam" << std::endl;
	std::cout << "In main, sniper address = " << &sniper << std::endl;
	attack(sniper);
	std::cout << "After attacking: \n" << std::endl;
	std::cout << "Sniper deals " << sniper << " dam" << std::endl;
	std::cout << "Sniper address = " << &sniper << std::endl;

	return 0;
}

void attack(int& x) {
	int sniper = 5000;
	std::cout << "In attack, sniper deals: " << sniper << " dam" << std::endl;
	std::cout << "In attack, sniper address = " << &sniper << std::endl;
	
	std::cout << "In attack, ghost sniper deals " << x << "dam" << std::endl;
	std::cout << "In attack, ghost sniper address = " << &x << std::endl;

	{
		int sniper = 8000;
		std::cout << "Critical of sniper: " << sniper << " dam" << std::endl;
		std::cout << "Critical strike, sniper address = " << &sniper << std::endl;
	}
	std::cout << "\nAfter critical strike: \n" << std::endl;
	std::cout << "Sniper deals: " << sniper << " dam" << std::endl;
	std::cout << "Sniper's address = " << &sniper << std::endl;

}
