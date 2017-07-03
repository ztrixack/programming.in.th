//============================================================================
// Name        : 0007 - Herman.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0007 Herman in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

#define M_PI 3.14159265358979323846

int main() {
	int r;
	double ans1, ans2;

	cout.precision(6);
	cout.setf(ios::floatfield, ios::fixed);

	cin >> r;

	r *= r;
	ans1 = r * M_PI;
	ans2 = r * 2;

	cout << ans1 << endl;
	cout << ans2 << endl;
	return 0;
}
