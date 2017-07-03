//============================================================================
// Name        : 1007 - Bee.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1007 Bee in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int y;
	int wrk, soi, tmp;

	while (true) {
		cin >> y;
		if (y == -1) break;
		wrk = 1;
		soi = 0;
		for (int i = 0; i < y; ++i) {
			tmp = wrk;
			wrk += soi + 1;
			soi = tmp;
		}
		tmp = wrk + soi + 1;
		cout << wrk << ' ' << tmp << endl;
	}
	return 0;
}
