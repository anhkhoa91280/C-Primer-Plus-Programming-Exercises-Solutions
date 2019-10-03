/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191004
 * Desc: This program gets students info and shows 3 ways of displaying the info
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <cstring>

const int LEN = 30;
struct Student {
	char fullname[LEN]; 
	char hobby[LEN];
	int ooplevel;
};
int get_info(Student * students[], int size);
void display1(Student student);
void display2(const Student * student);
void display3(Student * students[], int n);
int main() {
	int size;
	int enrolled;

	std::cout << "Enter class size: ";
	std::cin >> size;
	while ( std::cin.get() != '\n' )
		continue;

	Student * students[size];
	enrolled = get_info(students, size);
	std::cout << "\n\nNumber of students enrolled: " << enrolled << std::endl;
	for ( int i=0; i<enrolled; ++i ) {
		display1(*students[i]);
		display2(students[i]);
	}
	display3(students, enrolled);
	return 0;
}
int get_info(Student * students[], int size) {
	int cnt = 0;
	std::cout << "\nDetails of student #1: " << std::endl;
	
	while ( cnt<size ) {
		students[cnt] = new Student;

		std::cout << "Fullname: ";
		std::cin.getline(students[cnt]->fullname, LEN);
		if ( std::strlen(students[cnt]->fullname) == 0)	
			break;

		std::cout << "Hobby:";
		std::cin.getline(students[cnt]->hobby, LEN);
		
		std::cout << "OOP Level: ";
		std::cin >> students[cnt]->ooplevel;
		std::cin.get(); //eats up the new line left by >> 

		if ( ++cnt >= size )
			break;
		std::cout << "\nDetails of student #"  << cnt+1 << ": " << std::endl;
	}
	return cnt;
}

void display1(Student student) {
	std::cout << "Fullname: " << student.fullname << std::endl;
	std::cout << "Hobby: " << student.hobby << std::endl;
	std::cout << "OOP Level: " << student.ooplevel << std::endl;
	std::cout << std::endl;
}
void display2(const Student * student) {
	std::cout << "Fullname: " << student->fullname << std::endl;
	std::cout << "Hobby: " << student->hobby << std::endl;
	std::cout << "OOP Level: " << student->ooplevel << std::endl;
	std::cout << std::endl;
}
void display3(Student * students[], int n) {
	for ( int i=0; i<n; ++i ) {
		std::cout << "Fullname: " << students[i]->fullname << std::endl;
		std::cout << "Hobby: " << students[i]->hobby << std::endl;
		std::cout << "OOP Level: " << students[i]->ooplevel << std::endl;
		std::cout << std::endl;
	}
}
