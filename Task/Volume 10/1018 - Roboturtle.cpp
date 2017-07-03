//============================================================================
// Name        : 1018 - Roboturtle.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1018 Roboturtle in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, run;
	int d[2] = {0};
	int fwd = 1;
	bool head = false;

	string move;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> move >> run;
		if (move == "LT") {
			if (head) fwd *= -1;
			head = !head;
		} else if (move == "RT") {
			head = !head;
			if (head) fwd *= -1;
		} else if (move == "BW") {
			fwd *= -1;
		}
		d[head] += run * fwd;
		if (d[head] <= -50000 || d[head] >= 50000) {
			cout << "DEAD";
			return 0;
		}
	}
	cout << d[0] << ' ' << d[1] << endl;
	if (head) {
		if (fwd == 1) { cout << 'N'; }
		else { cout << 'S'; }
	} else {
		if (fwd == 1) { cout << 'E'; }
		else { cout << 'W'; }
	}
	return 0;
}
