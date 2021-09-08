#include <iostream>
#include <string>
#include "Swapper.h"

using namespace std;

template <class T>
T getBigger(T a, T b);

template <class T>
T getSmaller(T a, T b);

int main() {
	string name1 = "John";
	string name2 = "Alicetr";
	string res = getBigger(name1, name2);
	cout << "The bigger of two strings: " << res << endl;
	Swapper<int> intSwapper(10, 5);
	Swapper<string> stringSwapper(name1, name2);
	cout << "String\n-----------\n";
	cout << "First: " << stringSwapper.GetFirst() << endl;
	cout << "Second: " << stringSwapper.GetSecond() << endl;
	stringSwapper.Swap();
	cout << "First: " << stringSwapper.GetFirst() << endl;
	cout << "Second: " << stringSwapper.GetSecond() << endl;
	cout << "Int\n-----------\n";
	cout << "First: " << intSwapper.GetFirst() << endl;
	cout << "Second: " << intSwapper.GetSecond() << endl;
	intSwapper.Swap();
	cout << "First: " << intSwapper.GetFirst() << endl;
	cout << "Second: " << intSwapper.GetSecond() << endl;

	cout << "The smaller of 0.45 and 0.09 is: " << getSmaller(0.45, 0.09) << endl;
	cout << "The smaller of 3 and 6 is: " << getSmaller(6, 3) << endl;

	return 0;
}

template <class T>
T getBigger(T a, T b) {
	if (a > b) {
		return a;
	}
	return b;
}

template <class T>
T getSmaller(T a, T b) {
	if (a < b) {
		return a;
	}
	return b;
}