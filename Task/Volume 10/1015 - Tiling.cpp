//============================================================================
// Name        : 1015 - Tiling.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1015 Tiling in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

#define EQU(y, x) room[i][j] == room[i+y][j+x]

int main() {
	int n, count;
	int room[25][25] = {{0}};

	cin >> n;
	n++;
	for (int i = 2; i <= n; ++i) {
		for (int j = 2; j <= n; ++j) {
			cin >> room[i][j];
		}
	}
	count = 0;
	for (int i = 2; i <= n; ++i) {
		for (int j = 2; j <= n; ++j) {
			if (EQU(1, 0)) {
				if (EQU(-1, 0) || EQU(2, 0)) {
					continue;
				}
				if (EQU(0, -1)) {
					if (EQU(-1, -1) ||
							EQU(0, -2) || EQU(0, 1) ||
							EQU(1, -1) || EQU(1, 1)) {
						continue;
					}
				} else if (EQU(0, 1)) {
					if (EQU(-1, 1) ||
							EQU(0, -1) || EQU(0, 2) ||
							EQU(1, -1) || EQU(1, 1)) {
						continue;
					}
				} else if (EQU(1, -1)) {
					if (EQU(0, -1) || EQU(0, 1) ||
							EQU(1, -2) || EQU(1, 1) ||
							EQU(2, -1)) {
						continue;
					}
				} else if (EQU(1, 1)) {
					if (EQU(0, -1) || EQU(0, 1) ||
							EQU(1, -1) || EQU(1, 2) ||
							EQU(2, 1)) {
						continue;
					}
				} else {
					continue;
				}
				count++;
			}
		}
	}

	cout << count << endl;
	return 0;
}
