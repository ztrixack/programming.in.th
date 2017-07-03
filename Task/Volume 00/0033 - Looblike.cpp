//============================================================================
// Name        : 0033 - Looblike.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0033 ลูบไล้ (looblike) in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

struct numStruct {
	int id;
	int count;
} num[10005];

int compare (const void* a, const void* b) {
	int comp;
	comp = ((numStruct*)b)->count - ((numStruct*)a)->count;
	if (comp != 0) return comp;
	comp = ((numStruct*)a)->id - ((numStruct*)b)->id;
	return comp;
}

int main() {
	int cc, n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> cc;
		num[cc].count++;
		num[cc].id = cc;
	}
	qsort (num, 10001, sizeof(numStruct), compare);
	for (int i = 0; num[0].count == num[i].count; ++i) {
		cout << num[i].id << ' ';
	}
	return 0;
}
