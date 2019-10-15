/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191014
 * Desc: After overload resolution, 2 declarations were candidates (1) and (3) 
 * 	which are function templates. (2) is an explicit specialization which provides
 * 	no name so it can never be a candidate for overload resolution.
 *
 * 	Synthesize: After selecting 2 candidates (1) & (3), the compiler regnisize that 
 * 	(3) is more specialized for the client call, so the compiler synthesize a 
 * 	function declaration from (3) with the substitution of the argument from the 
 * 	client call for the function declaration parameter. 
 *
 *  Instantiation: The compiler then replicates the function template definition, 
 *  and also substitutes the argument from the client call for the replicated 
 *  function definition. At this point, this definition will be sitting in the 
 *  object file,ready to be called when the program runs. 
 *	
 * 	Note: A specialization is a function (whether the compiler produces it
 * 	implicitly or explicitly), however it does NOT introduce a new name (it borrows
 * 	the name previously introduced by its template). Therefore a specializations 
 * 	don't take part in overload resolution.
 *
 * Reference:  https://www.youtube.com/watch?v=NIDEjY5ywqU
 * */
#include <iostream>

template<class T> void h(T); //(1)
template<> void h<int*>(int*); //(2)
template<class T> void h(T*); //(3)
int main() {
	int * p = nullptr;
	h(p);
	return 0;
}
template<class T> 
void h(T) {
	std::cout << "Function template with parameter of type T" << std::endl;	
}
//explicit specialization
template<> 
void h<int*>(int * x) {
	std::cout << "Explicit specialization with param of type int *" << std::endl;
	std::cout << (*x)*(*x) << std::endl;
}
template<class T> 
void h(T*) {
	std::cout << "Function template with paramter of type T*" << std::endl;
}
