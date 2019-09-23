/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190923
 * Desc: This program sums values of all elements in an array by passing the 
 * 	array pointer to a function that does the sum
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int total(int * arr, int size);
const int MAX = 8;
int main() {
	int cookies[] = { 1,3,4,8,6,5,9,12 };
	//the below syntax works as well since cookies = &cookies[0], they are both
	//pointers to array
	/*std::cout << "Total number of cookies eaten: " << total(cookies, MAX) 
		<< std::endl;*/
	std::cout << "Total number of cookies eaten: " << total(&cookies[0], MAX) 
		<< std::endl;
	return 0;
}

//int arr[] is similar to int * arr when and only when used in function header
//and function prototypes
int total(int arr[], int size) {
	int total = 0;
	for ( int i=0; i<size; ++i )
		total += arr[i];
	return total;
}
