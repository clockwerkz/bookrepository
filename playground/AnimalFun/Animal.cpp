#include "Animal.h"

Animal::Animal(std::string name, double weight) : name(name), weight(weight) {};
std::string Animal::GetName() const {
	return name;
};
void Animal::SetName(std::string name) {
	this->name = name;
};
double Animal::GetWeight() const {
	return weight;
};
void Animal::SetWeight(double weight) {
	this->weight = weight;
};
std::string Animal::MakeNoise() {
	return "unknown";
};