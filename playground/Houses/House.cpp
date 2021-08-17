#include "House.h"
#include <iostream>

void House::setNumStories(int numStories) {
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows) {
	this->numWindows = numWindows;
}

void House::setColor(string color) {
	this->color = color;
}

int House::getNumStories() const
{
	return this->numStories;
}
int House::getNumWindows() const
{
	return this->numWindows;
}
string House::getColor() const
{
	return this->color;
}

void House::printHouseData() const
{
	cout << "This house is " << color << " and has "
		<< numStories << " stories and "
		<< numWindows << " windows." << endl;
}