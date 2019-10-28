/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191028
 * Desc: This program explains scope of variables within functions, block, etc.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

void g(int &, int &);
int main() {
	int x = 10;
	int y = 20;

	std::cout << "In main(), x: " << x << ", &x: " << &x << std::endl;  
	std::cout << "In main(), y: " << y << ", &y: " << &y << std::endl;  

	g(x, y);

	return 0;
}
void g(int & param_x, int & param_y) {
	int x = -10;
	int y = -20;
	int z = -30;

	std::cout << "In g(), x: " << x << ", &x: " << &x << std::endl; 
	std::cout << "In g(), y: " << y << ", &y: " << &y << std::endl; 
	std::cout << "In g(), z: " << z << ", &z: " << &z << std::endl; 

	std::cout << "In g(), param_x: " << param_x << ", &param_x: " 
		<< &param_x << std::endl; 
	std::cout << "In g(), param_y: " << param_y << ", &param_y: " 
		<< &param_y << std::endl; 
	{
		int x = 1000;
		int y = 2000;

		std::cout << "In block, x: " << x << ", &x: " << &x << std::endl; 
		std::cout << "In block, y: " << y << ", &y: " << &y << std::endl; 
		std::cout << "In block, z: " << z << ", &z: " << &z << std::endl; 
	}
	std::cout << "After block, x: " << x << ", &x: " << &x << std::endl; 
	std::cout << "After block, y: " << y << ", &y: " << &y << std::endl; 
	std::cout << "After block, z: " << z << ", &z: " << &z << std::endl; 
}
