#include <iostream>

using namespace std;
const int WIN_COMBINATIONS = 8;
const int DIMENSION = 3;

void printBoard(int board[3][3]);

int main() {
	
	int board[DIMENSION][DIMENSION] = { {'o','.','x'}, {'o','x','.'}, {'x','.','.'} };
	printBoard(board);
	int winConditions[WIN_COMBINATIONS][DIMENSION][2] = { 
		{ {0,0 }, { 1,0 }, { 2,0 } }, 
		{ {0,1 }, { 1,1 }, { 2,1 } }, 
		{ {0,2 }, { 1,2 }, { 2,2 } }, 
		{ {0,0 }, { 0,1 }, { 0,2 } }, 
		{ {1,0 }, { 1,1 }, { 1,2 } },
		{ {2,0 }, { 2,1 }, { 2,2 } },
		{ {0,0 }, { 1,1 }, { 2,2 } },
		{ {0,2 }, { 1,1 }, { 2,0 } },
	};
	for (int i = 0; i < WIN_COMBINATIONS; i++) {
		char currentChoice = board[winConditions[i][0][0]][winConditions[i][0][1]];
		bool isWinner = true;
		for (int j = 0; j < DIMENSION; j++) {
			int row = winConditions[i][j][0];
			int col = winConditions[i][j][1];
			char currentSelection = board[row][col];
			cout << "Comparing: " << currentChoice << " with " << currentSelection << "." << endl;
			if (isWinner && (currentChoice != currentSelection || currentSelection == '.')) {
				isWinner = false;
			}
		}
		if (isWinner) {
			cout << "We have a winner!! The " << currentChoice << " player wins!" << endl;
		}
	}
}

void printBoard(int board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			char currentSelection = board[i][j];
			cout << currentSelection << (j == 2 ? "" : " | ");
		}
		cout << endl << "---------" << endl;
	}
}