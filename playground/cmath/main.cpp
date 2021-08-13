#include <iostream>
#include <math.h>

using namespace std;

int productOfThree(int x, int y, int z);

int main() {
	cout << "The log2 of 512 is: " << log2(512) << endl;
	cout << "The product of 3 x 4 x 5 is: " << productOfThree(3, 4, 5) << endl;
	return 0;
}

int productOfThree(int x, int y, int z) {
	return x * y * z;
}