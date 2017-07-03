//============================================================================
// Name        : 1052 - Domino.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1052 Domino in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <cstdio>
#include <iostream>
using namespace std;

int count[100005] = {0};
int domino[100005][3] = {{0}};

int main() {
	int n, x, h;
	int max = 0;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x >> h;
		domino[i][0] = x;
		domino[i][1] = x-h;
		domino[i][2] = x+h;
		for (int j = i; j > 0; --j) {
			if (domino[j-1][1] < domino[j][1]) {
				domino[j-1][1] = domino[j][1];
			} else {
				break;
			}
		}
		if (domino[i][2] < domino[i-1][2]) {
			domino[i][2] = domino[i-1][2];
		}
	}
	count[0] = 1;
	for (int i = 1; i < n; ++i) {
		if (domino[i-1][0] > domino[i][1]) {
			count[i] = count[i-1] + 1;
		} else {
			count[i] = 1;
		}
		if (max < count[i]) {
			max = count[i];
			x = i+1;
			h = 0;
		}
	}
	count[n-1] = 1;
	for (int i = n-2; i >= 0; --i) {
		if (domino[i+1][0] < domino[i][2]) {
			count[i] = count[i+1] + 1;
		} else {
			count[i] = 1;
		}
	}
	if (h == 0) {
		printf("%d L", x);
	} else {
		printf("%d R", x);
	}
	return 0;
}
