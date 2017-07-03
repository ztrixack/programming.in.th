//============================================================================
// Name        : 1020 - Palindrome.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1020 Palindrome in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, m;
	string str;

	cin >> str;
	n = str.length();
	m = n >> 1;
	for (int i = 0, j = n-1; i < m; ++i, --j) {
		str[i] = tolower(str[i]);
		str[j] = tolower(str[j]);
		if (str[i] != str[j]) {
			cout << "No";
			return 0;
		}
	}
	n = m;
	m >>= 1;
	for (int i = 0, j = n-1; i < m; ++i, --j) {
		if (str[i] != str[j]) {
			cout << "Palindrome";
			return 0;
		}
	}
	cout << "Double Palindrome";
	return 0;
	return 0;
}
