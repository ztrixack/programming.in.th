//============================================================================
// Name        : 0018 - Reseto.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0018 Reseto in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	bool chk[1005] = {false};
	int n, k;

	cin >> n >> k;
	for (int i = 2; i <= n; ++i) {
		if (!chk[i]) {
			for (int j = i; j <= n; j += i) {
				if (!chk[j]) {
					chk[j] = true;
					if (--k == 0) {
						cout << j;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
