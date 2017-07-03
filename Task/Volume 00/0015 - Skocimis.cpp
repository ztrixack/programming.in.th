//============================================================================
// Name        : 0015 - Skocimis.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0015 Skocimis in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a = b - a;
	c = c - b;
	if (a > c) cout << --a;
	else cout << --c;
	return 0;
}
