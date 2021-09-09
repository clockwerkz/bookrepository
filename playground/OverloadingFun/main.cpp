#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
	Rectangle rect1 = Rectangle(3, 4);
	Rectangle rect2 = Rectangle(2, 2);
	cout << (rect1 == rect2 ? "true" : "false") << endl;
	Rectangle rect3 = rect1 + rect2;
	cout << "Rectangle 3 width: " << rect3.GetWidth() << " and Rectangle 3 length: " << rect3.GetLength() << endl;
	cout << "Rectangle 3 area: " << rect3.Area() << " and perimeter: " << rect3.Perimeter() << endl;
	cout << "Rectangle 1 and 3 are not equal: " << (rect1 != rect3 ? "true" : "false") << endl;
	rect3 = rect1;
	cout << "Rectangle 1 and 3 are now equal: " << (rect1 == rect3 ? "true" : "false") << endl;
	cout << "Rectangle 3 width: " << rect3.GetWidth() << " and Rectangle 3 length: " << rect3.GetLength() << endl;
	cout << "Rectangle 3 area: " << rect3.Area() << " and perimeter: " << rect3.Perimeter() << endl;
	return 0;
}