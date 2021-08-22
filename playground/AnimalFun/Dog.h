#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <string>

class Dog : public Animal {
	public:
		Dog(std::string name, double weight, std::string breed);
		std::string GetBreed() const;
		void DigHole() const;
		std::string MakeNoise() const;
	private:
		std::string breed;
};

#endif