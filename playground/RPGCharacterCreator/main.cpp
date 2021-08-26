#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include "Race.h"


void PrintTest(Player* player);
Player* GenerateNewCharacter();
Race FindRace(char raceSelection);

int main() {

	Player* inputPlayer = GenerateNewCharacter();
	PrintTest(inputPlayer);
	delete inputPlayer;

	inputPlayer = nullptr;
	return 0;
}


Player* GenerateNewCharacter() {
	char classSelection;
	char raceSelection;
	vector <char> classOptions{ 'W','w','P','p','M','m' };
	vector <char> raceOptions{'O', 'o', 'H', 'h', 'E', 'e', 'T', 't', 'D', 'd'};
	string name;
	bool validChoice = false;
		cout << "Enter the character's name: ";
		getline(cin, name);
	while (!validChoice) {
		cout << "Is " << name << " a (W)arrior, (P)riest, or a (M)age?: ";
		cin >> classSelection;
		
		cout << "What race is " << name << "?\n(H)human\n(E)lf\n(T)roll\n(D)warf\n(O)rc\n";
		cin >> raceSelection;

		validChoice = (find(classOptions.begin(), classOptions.end(), classSelection) != classOptions.end() &&
			find(raceOptions.begin(), raceOptions.end(), raceSelection) != raceOptions.end());

		if (validChoice) {
			switch (classSelection) {
			case 'W':
			case 'w':
				return new Warrior(name, FindRace(raceSelection));
			case 'P':
			case 'p':
				return new Priest(name, FindRace(raceSelection));
			case 'M':
			case 'm':
				return new Mage(name, FindRace(raceSelection));
			}
		}
		else {
			cout << "Invalid class and/or race selection: please try again!\n";
		}
	}
	return nullptr;
};

Race FindRace(char raceSelection) {

	switch (raceSelection) {
	case 'O':
	case 'o':
		return Race::ORC;
	case 'D':
	case 'd':
		return Race::DWARF;
	case 'T':
	case 't':
		return Race::TROLL;
	case 'E':
	case 'e':
		return Race::ELF;
	case 'H':
	case 'h':
	default:
		return Race::HUMAN;
	}
}
void PrintTest(Player* player) {
	cout << "Character: " << player->GetName() << " (" << player->WhatRace() << ") with "
		<< player->GetHitPoints() << " HP and " << player->GetMagicPoints() << " MP attacks!" << endl;
	cout << player->Attack() << endl << endl;
}