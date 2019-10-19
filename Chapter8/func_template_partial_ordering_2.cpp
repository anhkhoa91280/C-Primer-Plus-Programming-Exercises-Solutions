/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191019
 * Desc: This program illustrates another example of partial ordering.
 * 1st call: 
 * From Template A, we would have 
 * show_debts<double>(const double *, int n); so T is double
 * and Template A would match the call.
 *
 * 2nd call:
 * From Template A:
 * void show_debts<double*>(const double * arr[], int n); so T is double *
 * From Template B:
 * void show_debts<double>(const double * arr[], int n); so T is double
 * Thefore, no type conversion from Template B so the compiler would pick Template B
 * 
 * If Template B is removed from the program then 2nd also calls Function 
 * instantiated from Template A and print Addresses of variables rather than their 
 * values.
 *
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
#include <string>

template<class T> void show_debts(const T arr[], int n); //template A
struct Debt {
	std::string name;
	double amount;
};
template<typename T> void show_debts(const T * arr[], int n); //template B
const int MAX = 6;
int main() {
	const double debts[MAX] { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	Debt banks[MAX] {  
		{ "Pete", 105.50 },
		{ "Laura", 200.0 },
		{ "John", 1000 },
		{ "Maurice", 500.75 },
		{ "Nadal", 300.25 },
		{ "Federer", 5000 }
	};
	show_debts(debts, MAX);
	std::cout << std::endl;

	const double * bank_debts[MAX];
	for ( int i=0; i<MAX; ++i )
		bank_debts[i] = &banks[i].amount;
	std::cout << "Debts from banks: " << std::endl;
	show_debts(bank_debts, MAX);

	return 0;
}
template<class T> void show_debts(const T arr[], int n) {
	std::cout << "Template A:" << std::endl;
	for ( int i=0; i<n; ++i ) 
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
template<typename T> void show_debts(const T * arr[], int n) {
	std::cout << "Template B:" << std::endl;
	for ( int i=0; i<n; ++i ) 
		std::cout << *arr[i] << " ";
	std::cout << std::endl;
}
