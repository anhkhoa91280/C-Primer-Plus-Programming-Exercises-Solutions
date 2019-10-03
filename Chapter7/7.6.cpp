/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191003
 * Desc: This program gets user to enter double values into an array, reverses it
 * 	and displays it.
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

void show_vals(double * arr, int n);
int get_vals(double arr[], int n);
void reverse_vals(double * arr, int n);
const int SIZE = 5;
int main() {
	int cnt; 
	double arr[SIZE];

	cnt = get_vals(arr, SIZE);
	show_vals(arr, cnt);
	reverse_vals(arr, cnt);
	show_vals(arr, cnt);

	return 0;
}
int get_vals(double arr[], int n) {
	int cnt = 0;
	std::cout << "Floating value #1: ";

	while ( cnt<n ) {
		if ( !(std::cin >> arr[cnt]) || ++cnt >= n)
			break;
		//cnt++;
		std::cout << "Floating value #" << cnt+1 << ": ";
	}
	return cnt;
}
void show_vals(double * arr, int n) {
	for ( int i=0; i<n; ++i ) 
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void reverse_vals(double * arr, int n) {
	double temp;
	if ( n>=4 ) {
		for ( int i=1, j=n-2; i<j; ++i,--j ) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}
