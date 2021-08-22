#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;
void PrintAnimalStats(Animal* animal);

int main() {
	Animal* const animal = new Animal("Dog", 13.8);
	Animal* const rover = new Dog("Rover", 30, "Labrador");
	PrintAnimalStats(animal);
	PrintAnimalStats(rover);
	cout << rover->MakeNoise() << " " <<  endl;
	animal->SetName("Cat");
	animal->SetWeight(4.5);
	PrintAnimalStats(animal);
	delete animal;
	delete rover;
	//animal = nullptr; cannot set a const ptr to nullptr
	return 0;
}

void PrintAnimalStats(Animal* animal) {
	cout << "Animal " << animal->GetName() << " weighs " << animal->GetWeight()
		<< " and makes the sound of: " << animal->MakeNoise() << endl;
}