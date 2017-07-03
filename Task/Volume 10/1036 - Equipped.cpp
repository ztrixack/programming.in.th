//============================================================================
// Name        : 1036 - Equipped.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1036 Equipped in C++, Ansi-style
// Run time    : 0.064 s
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, w, k, p;
	int price[10005];
	unsigned short equip[1<<8];
	int have[10005] = {0};
	equip[0] = 0;

	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> price[i];
		for (int j = 0; j < k; ++j) {
			cin >> w;
			have[i] = (have[i]<<1) + w;
		}
	}
	for (int i = 1; i < k; ++i) {
		equip[i] = (1<<15)-1;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			if (equip[j] == (1<<15)-1) continue;
			w = j | have[i];
			p = equip[j] + price[i];
			if (p < equip[w]) {
				equip[w] = p;
			}
		}
	}
	cout << equip[w] << endl;
	return 0;
}
