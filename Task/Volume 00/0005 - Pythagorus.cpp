//============================================================================
// Name        : 0005 - Pythagorus.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0005 Pythagorus in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;

	cout.precision(6);
	cout.setf(ios::floatfield, ios::fixed);

	cin >> a >> b;
	a *= a;
	b *= b;
	c = sqrt(a + b);
	cout << c << endl;
	return 0;
}
