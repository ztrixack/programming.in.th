//============================================================================
// Name        : 0022 - Star.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0022	ดาว (star) in C++, Ansi-style
// Run time    : 0.076 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, m, p;
	cin >> n;
	if (n%2 == 0) m = n-1;
	else m = n;
	p = m >> 1;
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (p == j+i || p == j-i || p == j+(i+1-n) ||
					p == j-(i+1-n)) { cout << '*'; }
			else { cout << '-'; }
		}
		cout << endl;
	}
	return 0;
}
