/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191002
 * Desc: This program calculates volume of a box
 * Reference: C++ Primer Plus - 6th Edition 	
 * */
#include <iostream>
struct Box {
	char marker[40];
	float height;
	float width;
	float length;
	float volume;
};
void print_box(Box box);
void volume(Box * box);
int main() {
	Box box = {"Dynamite", 4, 5, 6.5};
	volume(&box);
	print_box(box);
}
void print_box(Box box) {
	std::cout << "Marker: " << box.marker << std::endl;
	std::cout << "Height: " << box.height << std::endl;
	std::cout << "Width: " << box.width << std::endl;
	std::cout << "Length: " << box.length << std::endl;
	std::cout << "Volume: " << box.volume << std::endl;
	std::cout << std::endl;
}
void volume(Box * box) {
	box->volume = box->height*box->width*box->length;
}

