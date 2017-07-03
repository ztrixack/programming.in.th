//============================================================================
// Name        : 0025 - BUKA.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0025 BUKA in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int l1, l2;
	string num1, num2, op;

	cin >> num1 >> op >> num2;
	l1 = num1.length();
	l2 = num2.length();
	if (op == "+") {
		if (l1 > l2) {
			l1 -= l2;
			num1[l1] = '1';
			cout << num1;
		} else if (l1 < l2) {
			l2 -= l1;
			num2[l2] = '1';
			cout << num2;
		} else {
			num1[0] = '2';
			cout << num1;
		}
	} else {
		num2.erase(0, 1);
		num1 += num2;
		cout << num1;
	}
	return 0;
}
