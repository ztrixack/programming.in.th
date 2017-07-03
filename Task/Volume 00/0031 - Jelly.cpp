//============================================================================
// Name        : 0031 - Jelly.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0031 วุ้น (jelly) in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int input, mul, count;
	count = 0;
	for (int i = 0; i < 3; ++i) {
		mul = 2;
		cin >> input;
		for (int j = 0; ; ++j) {
			if (mul > input) {
				count += j;
				break;
			}
			mul <<= 1;
		}
	}
	cout << count;
	return 0;
}
