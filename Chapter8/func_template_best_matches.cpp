/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191019
 * Desc: This program shows an example of chosing between best matches between 
 * 	exact matches 
 * Reference: C++ Primer Plus - 6th Edition.	
 * */
#include <iostream>

void g(int);
void g(const int);
void gr(int&);
void gr(const int&);
int main() {
	int x = 9;
	g(7);
	//for lvalue argument, the function with const parameter would be picked. 
	gr(x);
	//for rvalue argument, the function with non-const parameter would be picked.
	gr(11);
	return 0;
}
void g(int x) {
	std::cout << "Function 1, x: " << x << std::endl;
}
//for pass-by-value, non-const and const parameter functions are exact matches
//thus, defining the below would cause an error.
/*void g(const int x) {
	std::cout << "Fucntion 2, x:" << x << std::endl;
}*/
void gr(int & x) {
	std::cout << "Function 3, x: " << x << std::endl;

}
void gr(const int & x) {
	std::cout << "Function 4, x: " << x << std::endl;
}
