/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191019
 * Desc: This program illustrates another example of partial ordering.
 * 1st call: 
 * From Template A, we would have 
 * sum_debts<double>(const double *, int n); so T is double
 * and Template A would match the call.
 *
 * 2nd call:
 * From Template A:
 * double sum_debts<double*>(const double * arr[], int n); so T is double *
 * From Template B:
 * double sum_debts<double>(const double * arr[], int n); so T is double
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
template<class T> double sum_debts(const T arr[], int n); //template A
struct Debt {
	std::string name;
	double amount;
};
template<typename T> double sum_debts(const T * arr[], int n); //template B

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
	std::cout << "Debts: $" << sum_debts(debts, MAX) << std::endl;
	std::cout << std::endl;

	const double * bank_debts[MAX];
	for ( int i=0; i<MAX; ++i )
		bank_debts[i] = &banks[i].amount;
	std::cout << "Debts from banks: $" << sum_debts(bank_debts, MAX) << std::endl;

	return 0;
}
template<class T> double sum_debts(const T arr[], int n) {
	double sum = 0.0;
	for ( int i=0; i<n; ++i ) 
		sum += arr[i];
	return sum;
}
template<typename T> double sum_debts(const T * arr[], int n) {
	double sum = 0.0;
	for ( int i=0; i<n; ++i ) 
		sum += *arr[i];
	return sum;
}
