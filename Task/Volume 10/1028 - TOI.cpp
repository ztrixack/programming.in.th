//============================================================================
// Name        : 1028 - TOI.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1028 TOI in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int val, ans[1<<20];
	int n = 0;
	int value[1<<9] = {0};
	char op, var, var1;

	while (true) {
		cin >> op;
		if (op == '=') {
			cin >> var >> val;
			value[(int)var] = val;
		} else if (op == '#') {
			cin >> var;
			ans[n] = value[(int)var];
			n++;
		} else if (op == '!') {
			break;
		} else {
			cin >> var >> var1;
			if (op == '+') {
				value[(int)var] += value[(int)var1];
			} else if (op == '-') {
				value[(int)var] -= value[(int)var1];
			} else if (op == '*') {
				value[(int)var] *= value[(int)var1];
			} else if (op == '/') {
				value[(int)var] /= value[(int)(int)var1];
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << ans[i] << endl;
	}
	cout << '!';
	return 0;
}
