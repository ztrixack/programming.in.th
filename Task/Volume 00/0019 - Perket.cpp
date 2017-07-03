//============================================================================
// Name        : 0019 - Perket.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0019 Perket in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, mixs, mixb, bit;
	int s[10], b[10];
	int ans = 1000000000;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s[i] >> b[i];
	}
	n = 1<<n;
	for (int i = 1; i < n; ++i) {
		bit = i;
		mixs = 1;
		mixb = 0;
		for (int j = 0; bit > 0; ++j) {
			if (bit%2) {
				mixs *= s[j];
				mixb += b[j];
			}
			bit >>= 1;
		}
		if (mixs > mixb) bit = mixs - mixb;
		else bit = mixb - mixs;
		if (ans > bit) ans = bit;
	}
	cout << ans;
	return 0;
}
