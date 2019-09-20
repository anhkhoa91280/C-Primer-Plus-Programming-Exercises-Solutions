/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190919
 * Desc: This program uses fstream header to write data out to a textfile
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <fstream>

const int MAX = 50;
int main() {
	std::ofstream file; 
	file.open("Cars.txt");
	char make[50];
	int year;
	double a_price, b_price;

	std::cout << "Enter make and model: ";
	std::cin.getline(make, MAX);

	std::cout << "Enter year of make: ";
	std::cin >> year;

	std::cout << "Enter price: ";
	std::cin >> a_price;
	b_price = a_price * 0.9513;

	//Display on normal io stream
	std::cout << "Make and model: " << make << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout.precision(2);
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "Price was offered: " << a_price << std::endl;
	std::cout << "Price now offered: " << b_price << std::endl;

	//Write to file
	file << "Make and model: " << make << std::endl;
	file << "Make and model: " << make << std::endl;
	file << "Year: " << year << std::endl;
	file.precision(2);
	file.setf(std::ios_base::fixed, std::ios_base::floatfield);
	file << "Price was offered: " << a_price << std::endl;
	file << "Price now offered: " << b_price << std::endl;

	return 0;
}
