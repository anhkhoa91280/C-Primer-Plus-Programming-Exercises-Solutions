/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191006
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
Damage_Dealt & accumulate(Damage_Dealt & target, const Damage_Dealt & source);
void display(const Damage_Dealt & dd);
int main() {
	Damage_Dealt faceless = { "Void", 20, 19 };
	Damage_Dealt sniper = { "Sniper", 18, 16 };
	Damage_Dealt zeus = { "Zeus", 15, 12 };
	Damage_Dealt lc = { "LC", 13, 11 };
	Damage_Dealt cen = { "Cen", 13, 12 };

	Damage_Dealt team_scourge = { "Scourge", 0, 0 };
	Damage_Dealt duplicate;

	calc_accuracy(faceless);
	display(faceless);
	accumulate(team_scourge, faceless);
	display(team_scourge);

	display(accumulate(team_scourge, sniper));
	accumulate(accumulate(team_scourge, zeus), lc);
	display(team_scourge);

	duplicate = accumulate(team_scourge, cen);
	std::cout << "Duplicate team: " << std::endl;
	display(duplicate);
	std::cout << "Scourge team: " << std::endl;
	display(team_scourge);

	//Ill-advised assignment
	calc_accuracy(lc);
	duplicate = lc;
	std::cout << "Duplicate team after ill-advised assignment:" << std::endl;
	display(duplicate);

	std::cout << "Scourge team remains: " << std::endl;
	display(team_scourge);
}
void calc_accuracy(Damage_Dealt & dd) {
	dd.accuracy = 100.00f * dd.ontarget / dd.hits;
}
Damage_Dealt & accumulate(Damage_Dealt & target, const Damage_Dealt & source) {
	target.hits += source.hits;
	target.ontarget += source.ontarget;
	calc_accuracy(target);    	
	return target;
}
void display(const Damage_Dealt & dd) {
	std::cout << "Name/Team: " << dd.hero << " "
		<< " Hits: " << dd.hits << " On target: " << dd.ontarget
		<< " Accuracy: " << dd.accuracy << std::endl;
}
