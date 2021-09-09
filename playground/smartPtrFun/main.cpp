#include <iostream>
#include <memory>
#include <string>
#include "Car.h"

int main() {
	auto carPtr = std::make_unique<Car>("red", 4);
	std::unique_ptr<std::string> strPtr = std::make_unique<std::string>("Test");
	std::cout << "Car's color is " << carPtr->GetColor();
	std::cout << " and it has " << carPtr->GetDoors() << " doors.\n";
	std::cout << "String value test: " << *strPtr << std::endl;
	return 0;
}