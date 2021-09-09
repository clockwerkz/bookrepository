#include "Car.h"

Car::Car(std::string color, int numberOfDoors) : color(color), numberOfDoors(numberOfDoors) {};

std::string Car::GetColor() const {
	return color;
};
int Car::GetDoors() const {
	return numberOfDoors;
};