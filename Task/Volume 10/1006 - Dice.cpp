//============================================================================
// Name        : 1006 - Dice.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1006 Dice in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, tmp, length;
	string patt;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int dice[6] = {1, 2, 3, 5, 4, 6};
		cin >> patt;
		length = patt.length();
		for (int j = 0; j < length; ++j) {
			if (patt[j] == 'F') {
				tmp = dice[0];
				dice[0] = dice[3];
				dice[3] = dice[5];
				dice[5] = dice[1];
				dice[1] = tmp;
			} else if (patt[j] == 'B') {
				tmp = dice[0];
				dice[0] = dice[1];
				dice[1] = dice[5];
				dice[5] = dice[3];
				dice[3] = tmp;
			} else if (patt[j] == 'L') {
				tmp = dice[0];
				dice[0] = dice[4];
				dice[4] = dice[5];
				dice[5] = dice[2];
				dice[2] = tmp;
			} else if (patt[j] == 'R') {
				tmp = dice[0];
				dice[0] = dice[2];
				dice[2] = dice[5];
				dice[5] = dice[4];
				dice[4] = tmp;
			} else if (patt[j] == 'C') {
				tmp = dice[1];
				dice[1] = dice[4];
				dice[4] = dice[3];
				dice[3] = dice[2];
				dice[2] = tmp;
			} else if (patt[j] == 'D') {
				tmp = dice[1];
				dice[1] = dice[2];
				dice[2] = dice[3];
				dice[3] = dice[4];
				dice[4] = tmp;
			}
		}
		cout << dice[1] << ' ';
	}
	return 0;
}
