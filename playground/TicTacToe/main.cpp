#include <iostream>

using namespace std;

void PrintSomething();
void PrintMyName(string name);
int Square(int number);

int main() {
	cout << "The square of 4 is: " << Square(4) << endl;
	cout << "The square of 5 is: " << Square(5) << endl;
}

int Square(int number) {
	return number * number;
}

void PrintSomething() {
	cout << "Hello from the function!\n";
}

void PrintMyName(string name) {
	cout << "Hello, " << name << "! It's nice to meet you.\n";
}