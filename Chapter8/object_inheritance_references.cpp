/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191008
 * Desc: This program uses reference to an iostream object as function parameter, 
 * 	which can be used to perform operations on objects that are its child class
 * 	such as objects of the fstream class. 
 * */
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>

void file_telescope(std::ostream & os, const double fo, const double * fe, int cnt);
const int MAX = 5;
int main() {
	double objective;
	double eps[MAX];
	
	std::ofstream file;
	const char * filename = "Telescope-data.txt";
	file.open(filename);

	if ( !file.is_open() ) {
		std::cout << "Error reading file " << filename << std::endl;
		exit(EXIT_FAILURE);
	}

	std::cout << "Enter focal length of objective in mm: ";
	std::cin >> objective;

	std::cout << "Enter focal length of " << MAX << " pieces in mm: " << std::endl;
	for ( int i=0; i<MAX; ++i ) {
		std::cout << "Enter focal length for piece #" << i+1 << ": ";
		std::cin >> eps[i];
	}
	file_telescope(std::cout, objective, eps, MAX);
	file_telescope(file, objective, eps, MAX);
	file.close();
	return 0;
}
void file_telescope(std::ostream & os, const double fo, const double * fe, int cnt) {
	std::ios_base::fmtflags initial;
	initial = os.setf(std::ios_base::fixed); //set initial formatting state

	os.precision(0);
	os << "Length of focal objective: " << fo << "mm" << std::endl;

	os.setf(std::ios::showpoint);
	os.width(12);
	os << "f.l. eyepiece";
	os.width(15);
	os << "magnification" << std::endl;

	os.precision(1);
	for ( int i=0; i<cnt; ++i ) {
		os.width(12);
		os << fe[i];
		os.width(15);
		os << static_cast<int>(fo/fe[i] + 0.5) << std::endl;
	}
	os.setf(initial);
}
