//============================================================================
// Name        : 1031 - Tower.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1031 Tower in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

struct stairsStruct {
	int from;
	int to;
} stairs[100005];

int compare(const void* a, const void* b) {
	if ( ((stairsStruct*)a)->from > ((stairsStruct*)b)->from )
		return 1;
	else if ( ((stairsStruct*)a)->from < ((stairsStruct*)b)->from )
		return -1;
	else
		return 0;
}

int main() {
	int k, n, m, a, b;
	int p[10005] = {0};

	cin >> k >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> stairs[i].from >> stairs[i].to;
	}
	qsort(stairs, m, sizeof(stairsStruct), compare);
	for (int i = 0; i < m; ++i) {
		a = p[stairs[i].to];
		b = p[stairs[i].from] + 1;
		if ((b != 1 && (b < a || a == 0)) || stairs[i].from == 1) {
			p[stairs[i].to] = b;
		}
	}
	for (int i = n; i > 0; --i) {
		if (p[i] > 0 && p[i] <= k) {
			cout << i;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
