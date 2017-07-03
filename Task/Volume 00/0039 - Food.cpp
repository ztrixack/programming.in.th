//============================================================================
// Name        : 0039 - Food.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0039 อาหาร (Food) in C++, Ansi-style
// Run time    : 0.028 s
//============================================================================

#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int food[8] = {1, 2, 3, 4, 5, 6, 7, 8};

int main() {
	bool nf[10] = {false};
	int n, m, f;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> f;
		nf[f] = true;
	}
	do {
		if (nf[food[0]] == false) {
			for (int i = 0; i < n; ++i) { printf("%d ", food[i]); }
			printf("\n");
		}
	} while (next_permutation(food, food+n));
	return 0;
}
