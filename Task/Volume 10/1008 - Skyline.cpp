//============================================================================
// Name        : 1008 - Skyline.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1008 Skyline in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, li, hi, ri;
	int line[300] = {0};

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> li >> hi >> ri;
		while(li < ri) {
			if (line[li] < hi) { line[li] = hi; }
			li++;
		}
	}
	hi = 0;
	for (int i = 1; i < 256; ++i) {
		if (line[i] != hi) {
			cout << i << ' ' << line[i] << ' ';
			hi = line[i];
		}

	}

	return 0;
}
