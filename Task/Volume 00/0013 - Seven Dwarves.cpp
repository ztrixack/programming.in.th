//============================================================================
// Name        : 0013 - Seven Dwarves.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0013 Seven Dwarves in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	bool chk = false;
	int v[9], sum = -100;
	for (int i = 0; i < 9; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	for (int i = 0; i < 9; ++i) {
		if (!chk) {
			for (int j = 0; j < 9; ++j) {
				if (sum == v[i] + v[j]) {
					v[i] = 0;
					v[j] = 0;
					chk = true;
					break;
				}
			}
		}
		if (v[i] != 0) { cout << v[i] << endl; }
	}
	return 0;
}
