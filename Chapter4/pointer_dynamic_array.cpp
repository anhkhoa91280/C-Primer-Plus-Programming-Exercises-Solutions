/*
 * Nqme: Dang Nguyen Anh Khoa
 * Date: 20190829
 * Desc: This program shows how to dynamically initialize an array using pointer
 * 	Unlike array, you can increment or decrement a pointer to traverse back and
 * 	forthe the array
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int * arr = new int[3];
	arr[0] = 0;
	arr[1] = 10;
	arr[2] = 20;

	std::cout << "arr[0]: " << arr[0] << std::endl; 
	arr++;
	std::cout << "arr[0] is now: " << arr[0] << std::endl; 
	arr--;
	std::cout << "arr[0] is now: " << arr[0] << std::endl; 

	//free up memory
	delete [] arr;
	//set dangling pointer to NULL
	arr = NULL;

	return 0;
}
