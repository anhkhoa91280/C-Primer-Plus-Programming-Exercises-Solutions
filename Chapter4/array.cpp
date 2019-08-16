/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190814
 * Desc: This program shows a C++ array is initialized, accessed, etc...
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main(){
	//Initialize an array with type int for each element, name i_arr, 
	//number of element 3
	int i_arr[3] = {1, 3 ,5};

	//Access the 2nd elements using index
	std::cout << "2nd element of the int array: " << i_arr[1] << std::endl;

	//Initialize an array by ommiting its size, C++ can calculate the size as
	//the product of number of elements and size of data type. So to get the 
	//size that you think, you have to divide the size of C++ calculates by 
	//the size of the data type
	float f_arr[] = {2.1, 2.2, 2.3};
	int f_size = sizeof(f_arr) / sizeof(float);
	std::cout << "Size of the float array: " << f_size << std::endl;

	//C++11 adds a few more features in list-initialization
	//1. If you don't initialize all elements, C++ will set uninitilized
	//	elements with 0
	//2. Similarly to single variable initialization, it does allow 
	//type narrowing conversion but will give a warning
	double salaries[10] = {4.2e5, 3.6e5};
	std::cout << "First salary: " << salaries[0] << std::endl;	
	std::cout << "Third salary: " << salaries[2] << std::endl;	
	long plifs[] = {25, 92, 3.1};
	std::cout << plifs[2] << std::endl;
	char slifs[4] = {'h', 'i', 1122011, '\0'};

	return 0;
}
