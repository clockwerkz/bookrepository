#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
	public:
		Car(std::string color, int numberOfDoors);
		std::string GetColor() const;
		int GetDoors() const;
	private:
		std::string color;
		int numberOfDoors;
};

#endif
