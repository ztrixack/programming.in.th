//============================================================================
// Name        : 0030 - Three-Eleven.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0030	3-11 (three-eleven) in C++, Ansi-style
// Run time    : 0.088 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n3, n11, r, length;
	string num;
	cin >> num;
	length = num.length() / 7;
	r = 0;
	n3 = 0;
	n11 = 0;
	for (int i = 0; i < length; ++i) {
		for (int j = 0; j < 7; ++j) {
			n3 = (n3*10) + (num[r] - '0');
			n11 = (n11*10) + (num[r] - '0');
			r++;
		}
		n3 %= 3;
		n11 %= 11;
	}
	length = num.length();
	for (int i = r; i < length; ++i) {
		n3 = (n3*10) + (num[i] - '0');
		n11 = (n11*10) + (num[i] - '0');
	}
	n3 %= 3;
	n11 %= 11;
	cout << n3 << ' ' << n11;
	return 0;
}
