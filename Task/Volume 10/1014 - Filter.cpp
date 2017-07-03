//============================================================================
// Name        : 1014 - Filter.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1014 Filter in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int w, h, n, x, a;
	int window[5000] = {0};
	int ans[5000] = {0};
	cin >> w >> h >> n;
	while(n--) {
		cin >> x >> a;
		a += x;
		while (x < a) {
			window[x]++;
			x++;
		}
	}
	while (w--) {
		ans[window[w]]++;
	}
	ans[0] *= h;
	ans[1] *= h;
	cout << ans[0] << ' ' << ans[1];
	return 0;
}
