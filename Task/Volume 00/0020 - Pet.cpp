//============================================================================
// Name        : 0020 - Pet.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0020 Pet in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int input, ans, n, p;

	ans = 0;
	for (int i = 0; i < 5; ++i) {
		n = 0;
		for (int j = 0; j < 4; ++j) {
			cin >> input;
			n += input;
		}
		if (n > ans) {
			p = i + 1;
			ans = n;
		}
	}
	cout << p << " " << ans;
	return 0;
}
