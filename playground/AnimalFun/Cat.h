#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <iostream>
#include <string>

class Cat : public Animal {
	public:
		Cat(std::string name, double weight);
		std::string MakeNoise() const;
		std::string Eat() const;
		void ChaseMouse() const;
};

#endif