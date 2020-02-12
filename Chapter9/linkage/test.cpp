#include <iostream>

const int MAX = 3;
const double * f1(const double *);
const double * f2(const double *);
const double * f3(const double *);

int main() {
	const double arr[] = {1.1, 2.2, 3.3};

	const double * (*fp)(const double *) = &f1;

	//std::cout << *(*fp)(&arr[0]) << std::endl;

	//array of pointers to function
	const double * (*afp[MAX])(const double *) = {f1, f2, f3};
	/*for (int i=0; i<MAX; ++i)
		std::cout << "i: " << i << *(*afp[i])(&arr[0]) << std::endl;*/

	//pointer to an array of pointers to function
	const double * (*(*pafp)[MAX])(const double *) = &afp;
	for (int i=0; i<MAX; ++i)
		std::cout << *(*(*pafp)[i])(&arr[0]) << std::endl;

	return 0;
}
const double * f1(const double *arr) {
	std::cout << ",func 1 ";
	return arr;
}
const double * f2(const double *arr) {
	std::cout << ",func 2 ";
	return &arr[1];
}
const double * f3(const double *arr) {
	std::cout << ",func 3 ";
	return &arr[2];
}
