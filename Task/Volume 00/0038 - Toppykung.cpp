//============================================================================
// Name        : 0038 - Toppykung.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0038 Toppykung in C++, Ansi-style
// Run time    : 0.008 s
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int compare(const void* a, const void* b) {
	if (*(string*)a > *(string*)b) return 1;
	else if (*(string*)a < *(string*)b) return -1;
	else return 0;
}

int main() {
	int n;
	string txt[1005];

	cin >> n;
	for (int i = 0; i < n; ++i) { cin >> txt[i]; }
	qsort(txt, n, sizeof(string), compare);
	for (int i = 0; i < n; ++i) {
		if (txt[i] != txt[i+1]) {
			cout << txt[i] << endl;
		}
	}
	return 0;
}
