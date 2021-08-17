#include <iostream>
#include <string>

using namespace std;

class House {
	public:
		void setNumStories(int numStories) {
			this->numStories = numStories;
		}

		void setNumWindows(int numWindows) {
			this->numWindows = numWindows;
		}

		void setColor(string color) {
			this->color = color;
		}

		int getNumStories() const
		{
			return this->numStories;
		}
		int getNumWindows() const
		{
			return this->numWindows;
		}
		string getColor() const
		{
			return this->color;
		}
	private:
		int numStories;
		int numWindows;
		string color;
};

void printHouseData(const House &house);

int main()
{
	House myHouse;
	myHouse.setColor("tan");
	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);

	House yourHouse;
	yourHouse.setColor("dodger blue");
	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);

	printHouseData(myHouse);
	printHouseData(yourHouse);
	return 0;
}

void printHouseData(const House &house) {
	cout << "This house is " << house.getColor() << " and has "
		<< house.getNumStories() << " stories and "
		<< house.getNumWindows() << " windows." << endl;
}