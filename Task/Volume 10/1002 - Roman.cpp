//============================================================================
// Name        : 1002 - Roman.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1002 Roman in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int tmp, num, n, m;
	int roman[6] = {0};
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		m = 0;
		for (num = i; num != 0; num /= 10) {
			tmp = num % 10;
			if (tmp > 3 && tmp < 9) { ++roman[m+1]; }
			else if (tmp == 9) { ++roman[m+2]; }
			tmp %= 5;
			if (tmp == 4) { ++roman[m]; }
			else roman[m] += tmp;
			m += 2;
		}
	}
	for (int i = 0; i < 5; ++i) { cout << roman[i] << ' '; }
	return 0;
}
