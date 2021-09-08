#include <iostream>
#include <deque>
#include <stack>
#include <string>
using namespace std;


void storeReverse(string origString, stack<char>& reverseStack);
bool isPalindrone(string origString);
void printResult(string origString);

void printDeque(deque<int> &deck);

int main() {
	deque<int> deck{4,5,6};
	deck.push_front(10);
	deck.push_back(80);
	/*printDeque(deck);*/
	string palindromes[5]{ "tacocat", "test", "madamimadam", "racecar", "tarot" };
	for (string word : palindromes) {
		printResult(word);
	}
	return 0;	
}

void storeReverse(string origString, stack<char>& reverseStack) {
	for (char c : origString) {
		reverseStack.push(c);
	}
}
bool isPalindrone(string origString) {
	stack<char> reverseStack;
	storeReverse(origString, reverseStack);
	for (char firstChar : origString) {
		char lastChar = reverseStack.top();
		if (firstChar != lastChar) {
			return false;
		}
		reverseStack.pop();
	}
	return true;
}
void printResult(string origString) {
	cout << "is " << origString << " a palindrome?\t"
		<< boolalpha << isPalindrone(origString) << endl;
}

void printDeque(deque<int> &deck) {
	for (auto el : deck) {
		cout << "\t" << el << endl;
	}
}
