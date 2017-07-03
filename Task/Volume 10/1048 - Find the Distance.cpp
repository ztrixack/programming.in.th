//============================================================================
// Name        : 1048 - Find the Distance.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1048 Find the Distance in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	int sum = 0;

	cin >> k >> n;
	for (int i = 0; i < n; ++i) {
		m = i ^ (i + 1);
		while(m >>= 1) { sum++; }
		sum++;
	}
	printf("%d", sum);
	return 0;
}
