//============================================================================
// Name        : 1000 - Word Chain.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1000 Word Chain in C++, Ansi-style
// Run time    : 0.652 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	bool swap = true;
	int n, m;
	int chk;
	string txt[2];
	cin >> n >> m >> txt[!swap];
	for (int i = 1; i < m; ++i) {
		chk = 0;
		cin >> txt[swap];
		for (int j = 0; j < n; ++j) {
			if (txt[swap][j] != txt[!swap][j]) { chk++; }
		}
		if (chk > 2) { break; }
		swap = !swap;
	}
	cout << txt[!swap];
	return 0;
}
