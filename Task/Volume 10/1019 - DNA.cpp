//============================================================================
// Name        : 1019 - DNA.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1019 DNA in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int l1, l2, max, x, k;
	string dna1, dna2;

	cin >> dna1 >> dna2;
	l1 = dna1.length();
	l2 = dna2.length();
	max = 0;
	x = 0;
	for (int i = 0; i < l1; ++i) {
		for (int j = 0; j < l2; ++j) {
			if (dna1[i] == dna2[j]) {
				for (k = 0; i+k < l1 && j+k < l2; ++k) {
					if (dna1[i+k] != dna2[j+k]) { break; }
				}
				if (max < k) {
					max = k;
					x = i;
				}
			}
		}
	}
	dna1 = dna1.substr(x, max);
	cout << dna1;
	return 0;
}
