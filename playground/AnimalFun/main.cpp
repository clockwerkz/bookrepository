#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main() {

	enum Direction{ UP, DOWN, LEFT, RIGHT, STANDING};
	Animal* tom = new Cat("Tom", 11.50);
	cout << tom->GetName() << " is a cat, and says: " << tom->MakeNoise() << "! "
		<< "eats: " << tom->Eat() << endl;
	//((Cat*)tom)->ChaseMouse(); Older style of casting
	(reinterpret_cast<Cat*>(tom))->ChaseMouse();
	Animal* rover = new Dog("Rover", 30, "Labrador");

	cout << rover->GetName() << " eat: " << rover->Eat() << endl;
	cout << "Dog " << rover->GetName() << " weighs " << rover->GetWeight()
		<< " and makes the sound of: " << rover->MakeNoise() << endl;
	((Dog*)rover)->DigHole();
	((Dog*)rover)->ChaseCat();
	delete rover;
	delete tom;
	tom = nullptr;
	rover = nullptr;
	return 0;
}
