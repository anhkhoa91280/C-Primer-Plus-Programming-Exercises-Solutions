/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190925
 * Desc: This program shows how you pass any array element as argument to a function
 * 	Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int sum_cookies(int * arr, int size);
const int MAX = 8;
int main() {
	int cookies[MAX] = { 8, 12, 3, 4, 9, 10, 5, 13 };
	
	std::cout << "array size: " << sizeof(cookies) << std::endl;
	std::cout << "pointer size: " << sizeof(cookies[0]) << std::endl;

	//Though the addresses look the same but 1 is for the whole 32 bytes of memory
	//whereas the other is responsible for only 4 byte of the first element
	std::cout << "Array address: " << &cookies << std::endl;
	std::cout << "First pointer address: " << &cookies[0] << std::endl;

	//first 3 eaters	
	std::cout << "First 3 ate: " << sum_cookies(cookies, 3) << std::endl;
   //last 4
	std::cout << "Last 4 ate: " << sum_cookies(cookies+4, 4) << std::endl;	
}

int sum_cookies(int * arr, int size) {
	int total = 0;
	for ( int i=0; i<size; ++i )
		total += arr[i];
	return total;
}
