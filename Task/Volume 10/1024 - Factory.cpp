//============================================================================
// Name        : 1024 - Factory.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1024 Factory in C++, Ansi-style
// Run time    : 0.568 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, minimum, maximum, diff;
	int diffs = 1<<30, s2, s3;
	int fac[1005];
	int m[3] = {0};

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> fac[i];
	}

	for (int i = 0; i < n-2; ++i) {
		m[0] += fac[i];
		m[1] = 0;
		for (int j = i+1; j < n-1; ++j) {
			m[1] += fac[j];
			m[2] = 0;
			for (int k = j+1; k < n; ++k) {
				m[2] += fac[k];
			}
			maximum = max(max(m[0], m[1]), m[2]);
			minimum = min(min(m[0], m[1]), m[2]);
			diff = maximum - minimum;
			if (diff < diffs) {
				diffs = diff;
				s2 = i+2;
				s3 = j+2;
			}
		}
	}
	cout << s2 << ' ' << s3 << endl;
	return 0;
}
