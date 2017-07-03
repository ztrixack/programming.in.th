//============================================================================
// Name        : 1012 - Silly Bakery.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1012 Silly Bakery in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, tmp, ans;
	int cake[5] = {0};
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 5; ++j) {
			cin >> tmp;
			cake[j] += tmp;
		}
	}
	ans = cake[0] + cake[1] + ((cake[2]+1)>>1);
	tmp = cake[1] + ((cake[2]%2)<<1);

	if (cake[3] > tmp) {
		cake[3] -= tmp;
		tmp = 0;
	} else {
		tmp -= cake[3];
		cake[3] = 0;
	}
	ans += ((cake[3]+3)>>2);
	tmp = (tmp+(cake[3]%4))<<1;

	if (cake[4] > tmp) { cake[4] -= tmp; }
	else { cake[4] = 0; }
	ans += ((cake[4]+7)>>3);

	cout << ans;
	return 0;
}
