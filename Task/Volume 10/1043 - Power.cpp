//============================================================================
// Name        : 1043 - Power.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1043 Power in C++, Ansi-style
// Run time    : 0.080 s
//============================================================================

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n, m, p, q;
	double rank;
	cin >> n;
	while(n--) {
		cin >> m;
		rank = sqrt(m);
		for (int i = 2; i <= rank; ++i) {
			p = i;
			for (q = 1; p < m; ++q) {
				p *= i;
				if (m % p != 0) break;
			}
			if (p == m) break;
		}
		if (p == m) {
			printf("%d\n", q);
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
