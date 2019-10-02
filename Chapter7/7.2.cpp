/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191002
 * Desc: This program takes user golf scores of up to 10, calculate the average
 * 	and display all information
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

int get_scores(float * scores, int n);
void calculate_avg(float * scores, int n, float * avg);
void show_scores(float * scores, int n, const float * avg);
const int MAX = 10;
int main() {
	float scores[MAX]; 
	int num_of_scores;
	float avg;

	num_of_scores = get_scores(scores, MAX);
	calculate_avg(&scores[0], num_of_scores, &avg);
	show_scores(scores, num_of_scores, &avg);

	return 0;
}
int get_scores(float * scores, int n) {
	int i=0;
	std::cout << "Enter score #1: ";
	while ( i < n ) {
		if ( !(std::cin >> scores[i]) || scores[i]<0 )
		   break;
		i++;	
		std::cout << "Enter score #" << i+1 << ": ";
	}
	return i;
}
void calculate_avg(float * scores, int n, float * avg) {
	float total = 0;
	for ( int i=0; i<n; ++i )
		total += scores[i];
	*avg = total/n;
}
void show_scores(float * scores, int n, const float * avg) {
	std::cout << "Scores: ";
	for ( int i=0; i<n; ++i ) {
		std::cout << scores[i] << " ";
	}
	std::cout << "Average score: " << *avg << std::endl;
}

