//============================================================================
// Name        : 1044 - Road Cut.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1044 Road Cut in C++, Ansi-style
// Run time    : 0.012 s
//============================================================================

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n, m, ans, tmp;
	int rd[105][105], val[105][105];
	int sum = 0;
	int rX[105] = {0}, rY[105] = {0}, vX[105] = {0}, vY[105] = {0};

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> rd[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> val[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			rY[i] += rd[i][j];
			rX[j] += rd[i][j];
			vY[i] += val[i][j];
			vX[j] += val[i][j];
			sum += rd[i][j];
		}
	}
	ans = sum - rY[0] + vY[1];
	for (int i = 1; i < n; ++i) {
		tmp = sum - rY[i] + vY[i-1] + vY[i+1];
		if (ans < tmp) ans = tmp;
	}
	tmp = sum - rX[0] + vX[1];
	if (ans < tmp) ans = tmp;
	for (int i = 1; i < m; ++i) {
		tmp = sum - rX[i] + vX[i-1] + vX[i+1];
		if (ans < tmp) ans = tmp;
	}
	printf("%d", ans);
	return 0;
}
