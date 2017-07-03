//============================================================================
// Name        : 0021 - Kemija.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0021 Kemija in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int length;
	string txt, ans;
	getline(cin, txt);
	length = txt.length();
	for (int i = 0; i < length; ++i) {
		ans += txt[i];
		if (txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i'
				|| txt[i] == 'o' || txt[i] == 'u') {
			i+=2;
		}
	}
	cout << ans;
	return 0;
}
