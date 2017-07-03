//============================================================================
// Name        : 1003 - Nugget Number.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1003 Nugget Number in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	bool nugget[150] = {false};
	nugget[6] = true;
	nugget[9] = true;
	nugget[20] = true;
	cin >> n;
	if (n < 6) { cout << "no"; }
	for (int i = 6; i <= n; ++i) {
		if (nugget[i]) {
			nugget[i+6] = true;
			nugget[i+9] = true;
			nugget[i+20] = true;
			cout << i << endl;
		}
	}
	return 0;
}
