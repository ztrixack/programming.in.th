//============================================================================
// Name        : 0029 - Frog.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0029	กบ (frog) in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	y = ceil((float)y/x);
	if (y == 1) y++;
	cout << y;
	return 0;
}
