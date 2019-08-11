/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190811
 * Desc: This program shows type cast as in C style, C++ style, and C++11 style
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	//addition is done with 2 double then converted to int as result.
	int tigers = 11.99 + 19.99;
	std::cout << "tigers: " << tigers << std::endl;
    
	//operands are converted to int before the addition takes place
	//conversion uses C style type cast
	int lions = (int)20.5 + (int)25.6; 
	std::cout << "lions: " << lions << std::endl;
	
	
	//operands are converted to int before the addition takes place
	//conversion uses C++ style type cast
	int leopards = int(30.6) + int(30.6);
	std::cout << "leopards: " << leopards << std::endl;
	
	//operands are converted to int before the addition takes place
	//conversion uses C++11 style type cast (static_cast<type>)
	//Stroustrup thinks C type cast style opens up to too many 
	//dangerously possibilities so he invented static_cast<type>
	int cheetahs = static_cast<int>(34.6) + static_cast<int>(30.6);
	std::cout << "cheetahs: " << cheetahs << std::endl;

	return 0;
}
