/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190921
 * Desc: This program reads a text file and counts number of characters till the
 * 	end of the file.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
#include <fstream>
#include <cstdlib>

const int MAX = 50;
int main() {
	std::ifstream infile;
	char filename[MAX];
	char c;
	int cnt = 0;

	std::cout << "Enter file name: ";
	std::cin >> filename;
	std::cin.get();
	infile.open(filename);
	if ( !infile.is_open() ) {
		std::cout << "Error reading file " << filename << std::endl;
		exit(EXIT_FAILURE);
	}

	while ( infile >> c )
		++cnt;
	
	if ( infile.eof() )
		std::cout << "There are " << cnt << " characters in the file " << filename
			<< std::endl;
	else if ( infile.fail() )
		std::cout << "Terminated by type miss match." << std::endl;
	else
		std::cout << "Terminated with unknown reason." << std::endl;

	infile.close();

	return 0;
}
