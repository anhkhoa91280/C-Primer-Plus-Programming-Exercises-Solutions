/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191007
 * Desc: This program shows reference to structure in C++
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

const int MAX = 30;
struct Damage_Dealt {
	char hero[MAX];
	int hits;
	int ontarget;
	float accuracy;
};
void calc_accuracy(Damage_Dealt & dd);
const Damage_Dealt & accumulate(Damage_Dealt & target, const Damage_Dealt & source);
const Damage_Dealt & accumulate2(Damage_Dealt & target, const Damage_Dealt & source);
void display(const Damage_Dealt & dd);
int main() {
	Damage_Dealt faceless = { "Void", 20, 19 };
	Damage_Dealt sniper = { "Sniper", 18, 16 };
	Damage_Dealt zeus = { "Zeus", 15, 12 };
	
	Damage_Dealt team_scourge = { "Scourge", 0, 0 };
	Damage_Dealt dup;
	
	calc_accuracy(faceless);
	display(faceless);
	accumulate(team_scourge, faceless);
	accumulate(team_scourge, sniper);
	display(team_scourge);

	std::cout << std::endl;
	//if we don't protect ref returned fromm accumulate() then we can fall into 
	//the below ill-advised assignment
	//accumulate(team_scourge, zeus) = zeus;

	//accumulate() returns a ref so dup gets assigned a value directly from a variable
	//if accumualate() returns a value, that value has to be stored in a temporary
	//variable then gets assign to dup, which is a less efficient than the returning
	//a ref approach. Thus, try to return a ref if possible
	dup = accumulate(team_scourge, zeus);
	display(team_scourge);
	std::cout << "Duplicate team: " << std::endl;
	display(dup);
	
	return 0;
}
void calc_accuracy(Damage_Dealt & dd) {
	dd.accuracy = 100.00f * dd.ontarget / dd.hits;
}
//ref must be returned from a ref which does NOT cease to exist after the function call
const Damage_Dealt & accumulate(Damage_Dealt & target, const Damage_Dealt & source) {
	target.hits += source.hits;
	target.ontarget += source.ontarget;
	calc_accuracy(target);    	
	return target;
}
//accumulate() can also be done by using dynamically allocated pointer. However with
//this approach you have to take care of unallocating the memory created. 
const Damage_Dealt & accumulate2(Damage_Dealt & target, const Damage_Dealt & source) {
	Damage_Dealt * dd = nullptr;
	*dd = target;
	dd->hits += source.hits;
	dd->ontarget += source.ontarget;
	calc_accuracy(*dd);
	return *dd;
}
void display(const Damage_Dealt & dd) {
	std::cout << "Hero/Team: " << dd.hero << " "
		<< " Hits: " << dd.hits << " On target: " << dd.ontarget
		<< " Accuracy: " << dd.accuracy << std::endl;
}
