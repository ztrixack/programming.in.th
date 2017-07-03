//============================================================================
// Name        : 0010 - Trik.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0010 Trik in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int ans, length;
	bool x = false, y = false, z;
	string str;
	getline(cin, str);
	length = str.length();
	for (int i = 0; i < length; ++i) {
		if (str[i] == 'A') {
			x ^= !y;
		} else if (str[i] == 'B') {
			y ^= x;
		} else {
			z = x ^ (x == y);
			y ^= (x == y);
			x = z;
		}
	}
	ans = x + y + 1;
	cout << ans;
	return 0;
}
