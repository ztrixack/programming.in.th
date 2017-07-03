//============================================================================
// Name        : 1042 - Mafia.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1042 Mafia in C++, Ansi-style
// Run time    : 0.028 s
//============================================================================

#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

#define CLR(m) memset(m, 0, sizeof(m))

int main() {
	int n, m, k, x, y, r;
	int max = 0;
	int rdX[5005], rdY[5005];

	CLR(rdX);
	CLR(rdY);

	cin >> n >> m >> k;
	for (int i = 0; i < k; ++i) {
		cin >> x >> y >> r;
		for (int j = -r; j <= r; ++j) {
			if (x+j >= 0 && x+j < n) rdX[x+j]++;
			if (y+j >= 0 && y+j < m) rdY[y+j]++;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (rdX[i] > max) max = rdX[i];
	}
	for (int i = 0; i < m; ++i) {
		if (rdY[i] > max) max = rdY[i];
	}
	printf("%d", max);
	return 0;
}
