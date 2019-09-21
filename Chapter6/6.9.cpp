/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190921
 * Desc: This program manages contributors to the Society for the Prevation of
 * 	Rightful Influence. It lists contributors with $10000 or more as Grand Patrons
 * 	and the rest as Patrons.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <fstream>
#include <cstdlib>

const int MAX = 50;
struct Contributor {
	char name[MAX];
	double amount;
};
int main() {
	int num;
	int cnt;
	std::ifstream infile;

	//read file
	infile.open("contributors.txt");

	if ( !infile.is_open() ) {
		std::cout << "Error reading file " << std::endl;
		exit(EXIT_FAILURE);
	}

	//read first line for the number of contributors
	infile >> num;
	infile.get();

	Contributor * cons[num];

	for ( int i=0; i<num; ++i ) {
		cons[i] = new Contributor;
		infile.getline(cons[i]->name, MAX);
		infile >> cons[i]->amount;
		infile.get();
	}
	if ( infile.eof() )
		std::cout << "Contributor file read successfully." << std::endl;
	else if ( infile.fail() )
		std::cout << "Terminated by type miss match." << std::endl;
	else
		std::cout << "Terminated with unknown reason." << std::endl;

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

	infile.close();
	return 0;
}
