/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190921
 * Desc: This program manages contributors to the Society for the Prevation of
 * 	Rightful Influence. It lists contributors with $10000 or more as Grand Patrons
 * 	and the rest as Patrons.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

const int MAX = 50;
struct Contributor {
	char name[MAX];
	double amount;
};
int main() {
	int num;
	int cnt;

	std::cout << "Number of contributors: ";
	std::cin >> num;
	std::cin.get();

	Contributor * cons[num];

	for ( int i=0; i<num; ++i ) {
		cons[i] = new Contributor;
		std::cout << "\nPlease enter contributor #" << i + 1 << " info. " 
			<< std::endl;
		std::cout << "Name: ";
		std::cin.getline(cons[i]->name, MAX);
		std::cout << "Contribution amount: ";
		std::cin >> cons[i]->amount;
		std::cin.get();
	}

	//Grand Patrons
	cnt = 0;
	std::cout << "\nGRAND PATRONS" << std::endl;
	for ( Contributor * con : cons ) {
		if ( con->amount >= 10000 ) {
			++cnt;
			std::cout << con->name << std::endl;
		}
	}
	if ( 0==cnt )
		std::cout << "None" << std::endl;
	//Patrons
	cnt = 0;
	std::cout << "\nPATRONS" << std::endl;
	for ( Contributor * con : cons ) {
		if ( con->amount < 10000 ) {
			++cnt;
			std::cout << con->name << std::endl;
		}
	}
	if ( 0==cnt )
		std::cout << "None" << std::endl;

	return 0;
}
