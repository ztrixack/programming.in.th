//============================================================================
// Name        : 1001 - Brick.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1001 Brick in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j;
	int n, m, brick;
	char table[25][25];
	cin >> n >> m;
	for (i = 1; i <= n; ++i) { for (j = 0; j < m; ++j) { cin >> table[i][j]; } }
	for (i = 0; i < m; ++i) {
		cin >> brick;
		for (j = 1; j <= n; ++j) { if (table[j][i] != '.') { break; } }
		while (brick-- && j--) { table[j][i] = '#'; }
	}
	for (i = 1; i <= n; ++i) {
		for (j = 0; j < m; ++j) { cout << table[i][j]; }
		cout << endl;
	}
	return 0;
}
