//============================================================================
// Name        : 0016 - Ptice.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0016 Ptice in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	string str;

	int ascr = 0;
	int bscr = 0;
	int gscr = 0;
	int mscr = 0;
	string apatt = "ABCABCABCABC";
	string bpatt = "BABCBABCBABC";
	string gpatt = "CCAABBCCAABB";
	cin >> n >> str;
	for (int i = 0; i < n; ++i) {
		ascr += (apatt[mscr] == str[i]);
		bscr += (bpatt[mscr] == str[i]);
		gscr += (gpatt[mscr] == str[i]);
		mscr = (mscr + 1) % 12;
	}
	if (ascr > bscr) {
		if (ascr > gscr) { mscr = ascr; }
		else {mscr = gscr; }
	} else if (bscr > gscr) { mscr = bscr; }
	else {mscr = gscr; }
	cout << mscr << endl;
	if (ascr == mscr) cout << "Adrian" << endl;
	if (bscr == mscr) cout << "Bruno" << endl;
	if (gscr == mscr) cout << "Goran" << endl;
	return 0;
}
