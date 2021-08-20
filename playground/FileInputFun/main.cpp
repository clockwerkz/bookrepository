#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	ifstream infile;
	infile.open("input.txt");
	int inputNum;
	int sum = 0;
	vector<int> numbers;
	while (!infile.eof())
	{
		infile >> inputNum;
		numbers.push_back(inputNum);
		sum += inputNum;
	}
	infile.close();
	cout << "There were a total of " << numbers.size() << " number in the file.\n";
	cout << "Numbers:\n";
	for (int num : numbers) {
		cout << "\t" << num << endl;
	}
	cout << "Sum of numbers is: " << sum << endl;

	return 0;
}