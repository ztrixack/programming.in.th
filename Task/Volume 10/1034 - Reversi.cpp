//============================================================================
// Name        : 1034 - Reversi.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1034 Reversi in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

string reversi[10] = {
		"..........",
		"..........",
		"..........",
		"..........",
		"....OX....",
		"....XO....",
		"..........",
		"..........",
		"..........",
		".........."
};

int main() {
	int n, col, row;
	char ch, turn;

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> ch >> col;
		row = (ch - 'a') + 1;
		if (i%2) {
			turn = 'X';
			reversi[col][row] = 'X';
		} else {
			turn = 'O';
			reversi[col][row] = 'O';
		}
		for (int j = -1; j <= 1; ++j) {
			for (int k = -1; k <= 1; ++k) {
				for (int l = 1; reversi[col+(j*l)][row+(k*l)] != '.'; ++l) {
					if (reversi[col+(j*l)][row+(k*l)] == turn) {
						while (l--) {
							reversi[col+(j*l)][row+(k*l)] = turn;
						}
						break;
					}
				}
			}
		}
	}
	for (int i = 1; i <= 8; ++i) {
		cout << reversi[i].substr(1, 8) << endl;
	}
	return 0;
}
