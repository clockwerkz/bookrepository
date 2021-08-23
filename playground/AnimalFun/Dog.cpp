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

std::string Dog::Eat() const {
	return "I love dog food!";
};

void Dog::ChaseCat() const {
	std::cout << "Here, kitty kitty!" << std::endl;
};