/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190926
 * Desc: This program calculate average score using array range defined by start
 * 	and end of pointers
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

double avg_score(const double * start, const double * end);
const int MAX = 10;
int main() {
	double scores[MAX] {7, 6.5, 8, 7.5, 7.5, 9.2, 8.6, 10, 5, 6.7};
	
	std::cout << "Average score of all 10 students: " 
		<< avg_score(scores, scores + MAX) << std::endl;
	std::cout << "Average score of the first 5 students: " 
		<< avg_score(scores, scores + 5) << std::endl;
	std::cout << "Average score of the last 5 students: " 
		<< avg_score(scores + 5, scores + MAX) << std::endl;
	std::cout << "Average score of 4 students in the middle: " 
		<< avg_score(scores + 3, scores + 7) << std::endl;

	return 0;
}
double avg_score(const double * start, const double * end) {
	double sum = 0;
	int cnt = 0;
	
	if ( end - start < 0 ) {
		std::cout << "Invalid range. Program terminated prematurely." << std::endl;
		exit(EXIT_FAILURE);
	}

	for ( const double * p=start; p!=end; ++p ) {
		++cnt;
		sum += *p;
	}
	return sum/cnt;
}
