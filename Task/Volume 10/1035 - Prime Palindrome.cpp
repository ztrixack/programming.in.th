//============================================================================
// Name        : 1035 - Prime Palindrome.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1035 Prime Palindrome in C++, Ansi-style
// Run time    : 0.020 s
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

bool noprime[1<<20] = {false};

char pch[2][12] = {{ '1', '1', '3', '3', '5', '5', '7', '7', '9', '9', '1', '1' },
		{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1' }};


int main() {
	int val, lng, hlg;
	string n;
	bool plus;

	cin >> n;
	lng = n.length();
	hlg = lng/2;
	if (n != "2")
		n[0] = pch[0][(n[0]-'0')];
	while (true) {
		for (int i = 0; i < hlg; ++i) {
			if (n[i] != n[lng-1-i]) {
				goto update;
			}
		}
		istringstream (n) >> val;

		for (int i = 2; i*i <= val; ++i) {
			if (val % i == 0) {
				goto update;
			}
		}
		break;
		update:
		n[lng-1] = pch[0][(n[lng-1]-'0') + 1];
			plus = (n[lng-1] == '1');
		for (int i = lng-2; i >= 0 && plus; --i) {
			n[i] = pch[1][(n[i]-'0') + 1];
			plus = (n[i] == '0');
		}
		if (plus == true) {
			n.insert(0, 1, '1');
			lng++;
			hlg = lng/2;
		}
	}
	cout << n;
	return 0;
}
