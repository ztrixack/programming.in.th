//============================================================================
// Name        : 0023 - DATUM.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0023 DATUM in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

const int month[13] = {
		365,
		0, 31, 59, 90, 120, 151,
		181, 212, 243, 273, 304, 334
};

int main() {
	int d, m;
	cin >> d >> m;
	d = (d+month[m]) % 7;
	if (d == 0) { cout << "Wednesday"; }
	else if (d == 1) { cout << "Thursday"; }
	else if (d == 2) { cout << "Friday"; }
	else if (d == 3) { cout << "Saturday"; }
	else if (d == 4) { cout << "Sunday"; }
	else if (d == 5) { cout << "Monday"; }
	else if (d == 6) { cout << "Tuesday"; }
}
