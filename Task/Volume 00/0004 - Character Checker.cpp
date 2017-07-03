//============================================================================
// Name        : 0004 - Character Checker.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0004 Character Checker in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int length;
	bool u = false;
	bool l = false;
	string c;

	getline(cin, c);
	length = c.length();
	while (length--) {
		if (isupper(c[length])) { u++; }
		else { l++; }
	}
	if (u && l) { cout << "Mix" << endl; }
	else if (u) { cout << "All Capital Letter" << endl; }
	else if (l) { cout << "All Small Letter" << endl; }
	return 0;
}
