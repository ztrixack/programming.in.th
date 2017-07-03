//============================================================================
// Name        : 1017 - Magic Square.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1017 Magic Square in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, input;
	int col[15] = {0};
	int low[15] = {0};
	int crw[2] = {0};
	bool chk[105] = {false};

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> input;
			if (chk[input] == true) {
				cout << "No";
				return 0;
			}
			chk[input] = true;
			low[i] += input;
			col[j] += input;
			if (i == j) crw[0] += input;
			if (i + j + 1 == n) crw[1] += input;
		}
	}
	if (crw[0] != crw[1]) {
		cout << "No";
		return 0;
	}

	for (int i = 0; i < n; ++i) {
		if (crw[0] != col[i] || crw[0] != low[i]) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
