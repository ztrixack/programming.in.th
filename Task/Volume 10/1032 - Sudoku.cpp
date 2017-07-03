//============================================================================
// Name        : 1032 - Sudoku.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1032 Sudoku in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, prototype[9][9], sudoku[9][9];
	int sum[2];

	cin >> n;
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> prototype[i][j];
		}
	}
	for (int m = 1; m <= n; ++m) {
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				cin >> sudoku[i][j];
			}
		}
		for (int i = 0; i < 9; ++i) {
			sum[0] = 0;
			sum[1] = 0;
			for (int j = 0; j < 9; ++j) {
				if ((prototype[i][j] != 0 && prototype[i][j] != sudoku[i][j])) {
					goto finish;
				}
				sum[0] += sudoku[j][i];
				sum[1] += sudoku[i][j];
			}
			if (sum[1] != 45 || sum[0] != 45) {
				goto finish;
			}
		}
		cout << m << endl;
		finish:;
	}
	cout << "END";
	return 0;
}
