/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191022
 * Desc: This program calculates the biggest element out of an array. If each 
 * element is a string, then creates an explicit specialization that calculates and
 * returns the longest string.
 * Reference: C++ Primer Plus - 6th Edition. 
 * */
#include <iostream>
#include <cstring>
const int MAX = 5;
template<class T>
T maxn( T * arr, int n);

template<> char * maxn<char*>( char * arr[], int n);
int main() {
	int i_arr[] = { 5, 6, 9, 1, 34 };

	std::cout << "Max of int array: " << maxn(i_arr, MAX) << std::endl;

	const char * str[] = { "Pete Sampras", "Novak Djokovic", "Rafael Nadal",
   					"Roger Federer", "Andy Murray"	};
	std::cout << "Longest string: " << maxn(str, MAX) << std::endl;
	return 0;
}
template<class T>
T maxn(T * arr, int n) {
	T max = 0;
	for ( int i=0; i<n; ++i )
		if ( max < arr[i] )
			max = arr[i];
	return max;
}
template<> 
char * maxn<char*>( char * arr[], int n) {
	int len;
	int max_len = 0;
	int max_pos = 0; //position of the array element where the longest string is.
	for ( int i=0; i<n; ++i ) {
		len = strlen(arr[i]); 
		if ( max_len < len ) {
			max_len = len;
			max_pos = i;
		}
	}
	return arr[max_pos];
}
