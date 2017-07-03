//============================================================================
// Name        : 1025 - Least Common Multiplier.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1025 Least Common Multiplier in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	unsigned int gcd, mod;
	unsigned long long lcm = 1;

	cin >> n;
	while (n--) {
		cin >> gcd;
		mod = lcm;
		lcm *= gcd;

		while (mod != 0) {
			gcd %= mod;
			gcd ^= mod;
			mod ^= gcd;
			gcd ^= mod;
		}
		lcm /= gcd;
	}
	cout << lcm;
	return 0;
}
