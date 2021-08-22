#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main() {
	Animal* const animal = new Animal("Dog", 13.8);
	Dog* const rover = new Dog("Rover", 30, "Labrador");
	cout << "Animal " << animal->GetName() << " weighs " << animal->GetWeight()
		<< " and makes the sound of: " << animal->MakeNoise() << endl;
	cout << "Dog " << rover->GetName() << " weighs " << rover->GetWeight()
		<< " and makes the sound of: " << rover->MakeNoise() << endl;
	rover->DigHole();
	rover->ChaseCat();
	delete animal;
	delete rover;
	//animal = nullptr; cannot set a const ptr to nullptr
	return 0;
}
