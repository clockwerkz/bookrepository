#include "Cat.h"

Cat::Cat(std::string name, double weight) : Animal(name, weight) {};
std::string Cat::MakeNoise() const {
	return "Meow!";
};
std::string Cat::Eat() const {
	return "Tasty kitty food!";
};
void Cat::ChaseMouse() const {
	std::cout << "I'm chasing a mouse!" << std::endl;
};