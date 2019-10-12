/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191012
 * Desc: This program shows overloading template when the functionality needs to
 *	achieve same business objective but require different argument list (Often leands
 *	to different algorithm).
 * Reference: C++ Primer Plus - 6th Edition.	  
 * */
#include <iostream>

template<typename T>
void swap(T & a, T & b);

template<class T>
void swap(T * a, T * b, int n);

template<class T>
void display(T a, T b);

template<typename T>
void display(T * a, T * b, int n);

const int MAX = 3;
int main() {
	double a, b;

	std::cout << "Enter 2 number: ";
	std::cin >> a >> b;
	std::cout << "Before swapping numbers: " << std::endl;
	display(a,b);
	swap(a,b);
	std::cout << "After swapping numbers: " << std::endl;
	display(a,b);
	
	float c[MAX] {1.2, 2.3, 3.4};
	float d[MAX] {4.5, 5.6, 6.7};
	std::cout << "Before swapping array: " << std::endl;
	display(c,d, MAX);
	swap(c,d, MAX);
	std::cout << "After swapping array: " << std::endl;
	display(c,d, MAX);


	return 0;
}
template<typename T>
void swap(T & a, T & b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void swap(T * a, T * b, int n) {
	T temp;
	for (int i = 0; i < n;  ++i) {
		temp = a[i];
	  	a[i] = b[i];
		b[i] = temp;	
	}
}

template<class T>
void display(T a, T b) {
	std::cout << a << "\t" << b << std::endl;
}
template<typename T>
void display(T * a, T * b, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << a[i] << "\t";
	std::cout << std::endl;
	for (int i = 0; i < n; ++i)
		std::cout << b[i] << "\t";
	std::cout << std::endl;
}
