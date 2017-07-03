//============================================================================
// Name        : 0032 - Numbers.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0032 สนุกกับตัวเลข (numbers) in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int cc, n;
	int num[10] = {0};
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> cc;
		num[cc]++;
	}
	for (int i = 1; i < 10; ++i) {
		if (num[i] > 0) {
			num[i]--;
			cout << i;
			break;
		}
	}
	for (int i = 0; i < 10; ++i) {
		while (num[i]--) {
			cout << i;
		}
	}
	return 0;
}
