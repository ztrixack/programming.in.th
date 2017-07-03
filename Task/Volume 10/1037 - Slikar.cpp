//============================================================================
// Name        : 1037 - Slikar.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1037 Slikar in C++, Ansi-style
// Run time    : 0.024 s
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, m, c;
	bool cc = false;
	bool alive = true;
	short chk[55][55] = {{0}};
	string sliker[55];

	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> sliker[i];
	}
	for (int i = 1; i <= n; ++i) {
		sliker[i] = ' ' + sliker[i];
		for (int j = 1; j <= m; ++j) {
			if (sliker[i][j] == 'X' || sliker[i][j] == 'D') {
				chk[i][j] = 2;
			}
		}
	}
	c = 0;
	while (++c) {
		alive = false;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (chk[i][j] != cc) continue;
				if (sliker[i][j] == 'S') {
					chk[i][j] = 2;
					for (int k = -1; k < 2; ++k) {
						if (k==0) k++;
						if (sliker[i+k][j] == '.') {
							sliker[i+k][j] = 'S';
							chk[i+k][j] = !cc;
							alive = true;
						}
						if (sliker[i][j+k] == '.') {
							sliker[i][j+k] = 'S';
							chk[i][j+k] = !cc;
							alive = true;
						}
						if (sliker[i+k][j] == 'D' || sliker[i][j+k] == 'D') {
							cout << c;
							return 0;
						}
					}
				}
			}
		}
		if (!alive) break;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				if (chk[i][j] != cc) continue;
				if (sliker[i][j] == '*') {
					chk[i][j] = 2;
					for (int k = -1; k < 2; ++k) {
						if (k==0) k++;
						if (sliker[i+k][j] == '.' || sliker[i+k][j] == 'S') {
							sliker[i+k][j] = '*';
							chk[i+k][j] = !cc;
						}
						if (sliker[i][j+k] == '.' || sliker[i][j+k] == 'S') {
							sliker[i][j+k] = '*';
							chk[i][j+k] = !cc;
						}
					}
				}
			}
		}
		cc = !cc;
	}
	cout << "KAKTUS";
	return 0;
}
