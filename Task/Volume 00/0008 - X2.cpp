//============================================================================
// Name        : 0008 - X2.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0008 X2 in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

/*
 * s = (x1 + x2) / 2
 * 2s = x1 + x2
 * x2 = 2s - x1
 */


#include <iostream>
using namespace std;

int main() {
	int x, s;
	cin >> x >> s;
	s *= 2;
	s -= x;
	cout << s << endl;
	return 0;
}
