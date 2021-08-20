#include <iostream>
#include <fstream>
#include "Rectangle.h"
#include <vector>

using namespace std;

void populateVector(ifstream &infile, vector<Rectangle*> &rectangle);
void printRectangles(ostream &outfile, vector<Rectangle*> &rectangle);
void deleteRectangles(vector<Rectangle*>& rectangle);

int main() {

	//infile.close();
	vector<Rectangle*> rectangles;
	ifstream infile;
	ofstream outfile;
	infile.open("rectangleinput.txt");
	outfile.open("output.txt");
	if (!infile) {
		cout << "Error opening file. Exiting program" << endl;
		return 1;
	}
	cout << "Reading Rectangle data from file and creating rectangles..." << endl;
	populateVector(infile, rectangles);
	cout << "Length of Rectangles: " << rectangles.size() << endl;
	cout << "Printing rectangles..." << endl;
	printRectangles(outfile, rectangles);
	cout << "Deleting Rectangles..." << endl;
	deleteRectangles(rectangles);
	cout << "Length of Rectangles: " << rectangles.size() << endl;
	cout << "Done!" << endl;
	infile.close();
	return 0;
};

void populateVector(ifstream& infile, vector<Rectangle*>& rectangles) {
	double length, width;
	while (!infile.eof()) {
		infile >> length >> width;
		rectangles.push_back(new Rectangle(length, width));
	}
}

void printRectangles(ostream& outfile, vector<Rectangle*>& rectangles) {
	for (Rectangle* rectangle : rectangles) {
		outfile << "Rectangle (length " << rectangle->getLength() << ", width " << rectangle->getWidth() << ") stats: \t"
			<< "Area: " << rectangle->area() << ", Perimeter: " << rectangle->perimeter() << endl;
	}
}
void deleteRectangles(vector<Rectangle*>& rectangles) {
	/*while (!rectangles.empty()) {
		Rectangle* rectangle = rectangles.back();
		rectangles.pop_back();
		delete rectangle;
		rectangle = nullptr;
	}*/
	for (Rectangle* rectangle : rectangles) {
		delete rectangle;
	}
	rectangles.clear();
}




//Older File Read Project
//int input = 0;
//double sum = 0;
//int count = 0;
//int maxNum = INT_MIN;
//int minNum = INT_MAX;
//ifstream infile;
//cout << "Reading file contents: " << endl;
//infile.open("stats.txt");
//while (!infile.eof()) {
//	infile >> input;
//	if (input >= 0 && input <= 100) {
//		maxNum = maxNum < input ? input : maxNum;
//		minNum = minNum > input ? input : minNum;
//		sum += input;
//		count++;
//	}
//}
//double avg = sum / count;
//cout << "Done processing!" << endl;
//cout << "Total Numbers Processed:\t" << count << endl;
//cout << "Minimum Value:\t\t\t" << minNum << endl;
//cout << "Maximum Value:\t\t\t" << maxNum << endl;
//cout << "Average Value:\t\t\t" << avg << endl;