/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190920
 * Desc: This program reads scores from a file, sums up all scores and 
 * 	calculates the average.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <fstream>
#include <cstdlib>

const int MAX = 50;
int main() {
	char file_name[MAX];
	std::ifstream in_file;
	double score;
	double sum = 0;
	int cnt = 0;

	std::cout << "Enter the scores file: ";
	std::cin.getline(file_name, MAX);
	in_file.open(file_name);

	//Ensure file is read successfully
	if ( !in_file.is_open() ) {
		std::cout << "Failed reading file." << std::endl;
		std::cout << "Program terminating." << std::endl;
		exit(EXIT_FAILURE);
	}
	in_file >> score; //get the first score
	while ( in_file.good() ) {
		++cnt;
		sum += score;
		in_file >> score;
		in_file.get();
	}
	
	//Ensure reading successfully
	if ( in_file.eof() ) 
		std::cout << "Program's read the whole file." << std::endl;
	else if ( in_file.fail() )
		std::cout << "Terminated input by data missmatch." << std::endl;
	else
		std::cout << "Terminated for unknown reason." << std::endl;
	
	if ( 0 == cnt )
		std::cout << "No item read" << std::endl;
	else {
		std::cout.precision(2);
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout << "Items read: " << cnt << std::endl;
		std::cout << "Sum = " << sum << std::endl;
		std::cout << "Average score = " << sum/cnt << std::endl;
	}
	
	//close file when done
	in_file.close();		

	return 0;
}
