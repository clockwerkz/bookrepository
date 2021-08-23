#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main() {
	Animal* animal = new Animal("Dog", 13.8);
	Dog* rover = new Dog("Rover", 30, "Labrador");
	Animal* fido = new Dog("Fido", 50, "Golden Retriever");
	cout << fido->GetName() << " make nosie: " << fido->MakeNoise() << endl;
	cout << "Animal " << animal->GetName() << " weighs " << animal->GetWeight()
		<< " and makes the sound of: " << animal->MakeNoise() << endl;
	cout << "Dog " << rover->GetName() << " weighs " << rover->GetWeight()
		<< " and makes the sound of: " << rover->MakeNoise() << endl;
	rover->DigHole();
	rover->ChaseCat();
	delete animal;
	delete rover;
	animal = nullptr; 
	rover = nullptr;
	return 0;
}
