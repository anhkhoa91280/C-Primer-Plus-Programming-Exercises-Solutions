/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190917
 * Desc: This program shows switch statement is uesed instead of if...else
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

void show_menu();
void desc_dota();
void desc_idle_heroes();
void desc_got();

int main() {
	int choice;
	show_menu();
	std::cin >> choice;

	while ( choice != 4 ) {
		switch (choice) {
			case 1:
				desc_dota();
				break;
			case 2:
				desc_idle_heroes();
				break;
			case 3:
				desc_got();
				break;
			default:
				std::cout << "That's not a choice" << std::endl;
				break;
		}
		std::cout << std::endl;
		show_menu();
		std::cin >> choice;
	}

	return 0;
}
void show_menu() {
	std::cout << "Enter game selection: " << std::endl ;
	std::cout << "1 - Dota" << std::endl;
	std::cout << "2 - Idle Heroes" << std::endl;
	std::cout << "3 - Game of Thrones" << std::endl;
	std::cout << "4 - to quit" << std::endl;
}
void desc_dota() {
	std::cout << R"+*(Dota 2 is a multiplayer online battle arena (MOBA) video game developed and published by Valve Corporation. The game is a sequel to Defense of the Ancients (DotA), which was a community-created mod for Blizzard Entertainment's Warcraft III: Reign of Chaos and its expansion pack, The Frozen Throne. )+*";
}
void desc_idle_heroes() {
	std::cout << R"+*(Idle Heroes is a mobile game that is available for both Android and iOS. It can be downloaded from the available app stores. The aim of the game is to assemble a group of Heroes and to continuously improve and equip them with new items. With these heroes fights are carried out, repeatedly, which brings different rewards. Even when you're not around.
)+*";
}

void desc_got() {
	std::cout << R"+*(If you're a Game of Thrones fan, and have accrued the relevant metadata, you've probably seen advertisements for the official Game of Thrones mobile game, Conquest. Ads for it are all over the internet, which makes sense given it's currently Game of Thrones season, and it appears that ad money is working.

)+*";
}
