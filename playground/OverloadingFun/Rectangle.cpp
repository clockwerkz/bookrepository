#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) :length(length), width(width) {};

Rectangle::Rectangle() {
	length = 2.0;
	width = 2.0;
}

double Rectangle::GetLength() const{
	return length;
};
double Rectangle::GetWidth() const{
	return width;
};
void Rectangle::SetLength(double length) {
	this->length = length;
};
void Rectangle::SetWidth(double width) {
	this->width = width;
};
double Rectangle::Area() const{
	return length * width;
};

double Rectangle::Perimeter() const{
	return 2 * width + 2 * length;
}

bool Rectangle::operator==(const Rectangle& other) const {
	return this->Area() == other.Area();
};
Rectangle Rectangle::operator+(const Rectangle& other) const {
	double width = this->width + other.width;
	int length = this->length + other.length;
	Rectangle rect = Rectangle(length, width);
	return rect;
};
void Rectangle::operator=(const Rectangle& other) {
	this->width = other.width;
	this->length = other.length;
};