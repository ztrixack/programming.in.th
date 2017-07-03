//============================================================================
// Name        : 0011 - Modulo.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0011 Modulo in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0;
	bool mod[42] = {false};

	while (cin >> n) {
		n %= 42;
		cnt += !mod[n];
		mod[n] = true;
	}
	cout << cnt;
	return 0;
}
