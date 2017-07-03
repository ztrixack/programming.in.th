//============================================================================
// Name        : 0037 - Skylight.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0037 บินดูไฟ (skylight) in C++, Ansi-style
// Run time    : 0.008 s
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m, l, k, c;
	int input, ans;
	cin >> n >> m >> l >> k >> c;
	ans = l * k * c;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> input;
			ans += input;
		}
	}
	ans = ceil((double)ans/c);
	cout << ans;
	return 0;
}
