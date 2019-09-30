/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190930
 * Desc: This program sorts integers array based on different compare algorithms
 * */
#include <iostream>

bool ascending(int a, int b);
bool descending(int a, int b);
bool asc_absolute(int a, int b);
bool desc_absolute(int a, int b);
void swap(int * a, int * b);
void bubble_sort(int * arr, int size, bool (*compare)(int, int));
void print_arr(const int * arr, int n);
const int SIZE = 10;
int main() {
	int a[SIZE] { 11, 9, 7, 8, 6, 5, 4, 1, 12, 0 };
	bubble_sort(a, SIZE, ascending);
	print_arr(a, SIZE);
	bubble_sort(a, SIZE, descending);
	print_arr(a, SIZE);

	int b[] { -10, 12, 5, 8, 7, -12, -9, 0, 8, 3 };
	bubble_sort(b, SIZE, asc_absolute);
	print_arr(b, SIZE);
	bubble_sort(b, SIZE, desc_absolute);
	print_arr(b, SIZE);

	return 0;
}
bool ascending(int a, int b) {
	bool r;
	a > b ? r = true : r = false;
	return r;
}
bool descending(int a, int b) {
	bool r;
	a < b ? r = true : r = false;
	return r;
}
bool asc_absolute(int a, int b) {
	bool r;
	abs(a) > abs(b) ? r = true : r = false;
	return r;
}
bool desc_absolute(int a, int b) {
	bool r;
	abs(b) > abs(a) ? r = true : r = false;
	return r;
}
void swap(int * a, int * b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubble_sort(int * arr, int size, bool (*compare)(int, int)) {
	for (int i=0; i<size; ++i )
		for(int j=0; j<size-i-1; ++j)
			if ( compare(arr[j], arr[j+1]) )
				swap(&arr[j], &arr[j+1]);
}
void print_arr(const int * arr, int n) {
	for ( int i=0; i<n; ++i )
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
