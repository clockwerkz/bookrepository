#include "Dog.h"
#include <iostream>

Dog::Dog(std::string name, double weight, std::string breed) : Animal(name, weight), breed(breed) {};

std::string Dog::GetBreed() const {
	return breed;
};
void Dog::DigHole() const {
	std::cout << "I'm digging a hole!\n";
};

std::string Dog::MakeNoise() const {
	return "Bark-Bark";
};