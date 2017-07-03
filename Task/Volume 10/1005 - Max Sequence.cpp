//============================================================================
// Name        : 1005 - Max Sequence.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1005 Max Sequence in C++, Ansi-style
// Run time    : 0.016 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, sum, st, ed;
	int seq[3000];
	int max = 0;

	cin >> n;
	for (int i = 0; i < n; ++i) { cin >> seq[i]; }
	for (int i = n-1; i != 0; --i) {
		sum = 0;
		for (int j = i; j != 0; --j) {
			sum += seq[j];
			if (max < sum) {
				max = sum;
				st = j;
				ed = i;
			}
		}
	}
	if (max != 0) {
		while (st <= ed) {
			cout << seq[st] << ' ';
			st++;
		}
		cout << endl << max;
	} else { cout << "Empty sequence"; }

	return 0;
}
