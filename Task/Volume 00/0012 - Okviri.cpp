//============================================================================
// Name        : 0012 - Okviri.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0012 Okviri in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;


/* 0     1     2     3     4
 * x 012 3 456 7 890 1 234 5
 * . .#. . .#. . .*. . .#. .
 * . #.# . #.# . *.* . #.# .
 * # .A. # .B. * .C. * .D. #
 * . #.# . #.# . *.* . #.# .
 * . .#. . .#. . .*. . .#. .
 */

int main() {
	int length;
	string txt;

	cin >> txt;
	length = txt.length();
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < length; ++j) {
			if (i != 2) { cout << '.'; }
			else if (j == 0 || j % 3 == 1) { cout << '#'; }
			else { cout << '*'; }
			for (int k = 0; k < 3; ++k) {
				if ((i+k)%2) {
					if (i == 2 && k == 1) { cout << txt[j]; }
					else if (j%3 == 2) { cout << '*'; }
					else { cout << '#';}
				} else { cout << '.'; }
			}
		}
		if (i != 2) { cout << '.'; }
		else if (length % 3) { cout << '#'; }
		else { cout << '*'; }
		cout << endl;
	}
	return 0;
}
