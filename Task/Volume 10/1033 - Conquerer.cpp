//============================================================================
// Name        : 1033 - Conquerer.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1033 Conquerer in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

#define DM(n)		getB(n, 0, 0) = false;
#define PS(n, a, b) point[table[getY(n)+a][getX(n)+b]]--; point[n]++;
#define MT(n, y, x) table[y][x] = n; block[y][x] = true; pos[n][0] = y; pos[n][1] = x;

#define getY(n)		pos[n][0]
#define getX(n)		pos[n][1]
#define getB(n, a, b)	block[getY(n)+a][getX(n)+b]

int main() {
	int n, k, sum, num, max;
	int point[5] = {0, 1, 1, 1, 1};
	int pos[5][2];
	int table[105][105] = {{0}};
	bool block[105][105] = {{0}};
	char ch[5][1005];

	cin >> n >> k;
	MT(1, 1, n);
	MT(2, n, n);
	MT(3, n, 1);
	MT(4, 1, 1);
	sum = n*n;
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= k; ++j) {
			cin >> ch[i][j];
		}
	}
	for (int i = 1; i <= k; ++i) {
		for (int j = 1; j <= 4; ++j) {
			if (ch[j][i] == 'N') {
				if (getY(j) > 1 && !getB(j, -1, 0)) {
					DM(j);
					PS(j, -1, 0);
					MT(j, getY(j)-1, getX(j));
				}
			} else if (ch[j][i] == 'S') {
				if (getY(j) < n && !getB(j, 1, 0)) {
					DM(j);
					PS(j, 1, 0);
					MT(j, getY(j)+1, getX(j));
				}
			} else if (ch[j][i] == 'W') {
				if (getX(j) > 1 && !getB(j, 0, -1)) {
					DM(j);
					PS(j, 0, -1);
					MT(j, getY(j), getX(j)-1);
				}
			} else if (ch[j][i] == 'E') {
				if (getX(j) < n && !getB(j, 0, 1)) {
					DM(j);
					PS(j, 0, 1);
					MT(j, getY(j), getX(j)+1);
				}
			}
		}
	}
	max = 0;
	for (int i = 1; i <= 4; ++i) {
		sum -= point[i];
		if (max < point[i]) {
			max = point[i];
			num = 1;
		} else if (max == point[i]) {
			num++;
		}
	}
	if (sum == 0) {
		cout << num << ' ' << max << endl;
		for (int i = 1; i <= 4; ++i) {
			if (max == point[i]) {
				cout << i << endl;
			}
		}
	} else {
		cout << "No";
	}
	return 0;
}
