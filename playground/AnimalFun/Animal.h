#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>


class Animal {
	public:
		Animal(std::string name, double weight);
		std::string GetName() const;
		void SetName(std::string name);
		double GetWeight() const;
		void SetWeight(double weight);
		std::string MakeNoise() const;
	private:
		std::string name;
		double weight;
};

#endif