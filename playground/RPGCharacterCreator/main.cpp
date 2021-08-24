#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Race.h"


int main() {
	Player* warrior = new Warrior("Cassius", Race::ORC);
	cout << "Warrior: " << warrior->GetName() << " (" << warrior->WhatRace() << ") with " 
		<< warrior->GetHitPoints() << " HP attacks!" << endl;
	cout << warrior->Attack() << endl;

	return 0;
}