//============================================================================
// Name        : 0009 - ABC.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0009 ABC in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int v[3];
	string str;
	cin >> v[0] >> v[1] >> v[2] >> str;
	if (v[0] > v[1]) { v[0] ^= v[1], v[1] ^= v[0], v[0] ^= v[1]; }
	if (v[1] > v[2]) { v[2] ^= v[1], v[1] ^= v[2], v[2] ^= v[1]; }
	if (v[0] > v[1]) { v[0] ^= v[1], v[1] ^= v[0], v[0] ^= v[1]; }
	for (int i = 0; i < 3; ++i) {
		cout << v[str[i] - 'A'] << ' ';
	}
	return 0;
}
