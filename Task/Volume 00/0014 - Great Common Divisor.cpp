//============================================================================
// Name        : 0014 - Great Common Divisor.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0014 Great Common Divisor in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	do {
		a %= b;
		b ^= a ^= b ^= a;
	} while (b != 0);
	cout << a;
	return 0;
}
