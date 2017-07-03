//============================================================================
// Name        : 1027 - Short Message Service.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1027 Short Message Service in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

struct man {
	int vote;
	int pos;
	char name;
} ms[7];

int compare(const void* a, const void* b) {
	int comp;
	comp = (((man*)b)->vote - ((man*)a)->vote);
	if (comp != 0) { return comp; }
	comp = (((man*)a)->name - ((man*)b)->name);
	return comp;
}

int main() {
	int m;
	int n = 7;
	int length;
	string vs;

	for (int i = 0; i < 7; ++i) {
		ms[i].name = 'A' + i;
		ms[i].vote = 0;
		ms[i].pos = i;
	}

	while (true) {
		cin >> vs;
		if (vs == "!") break;
		length = vs.length();
		for (int i = 0; i < length; ++i) {
			m = vs[i] - 'A';
			ms[ms[m].pos].vote++;
		}
		qsort(ms, n, sizeof(man), compare);
		if (n == 1) continue;
		if (ms[n-1].vote != ms[n-2].vote) { n--; }
		for (int i = 0; i < 7; ++i) {
			m = ms[i].name - 'A';
			ms[m].pos = i;
		}
	}
	cout << n << endl;
	for (int i = 0; i < n; ++i) {
		cout << ms[i].name << ' ' << ms[i].vote << endl;
	}

	return 0;
}
