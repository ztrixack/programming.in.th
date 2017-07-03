//============================================================================
// Name        : 0017 - Kornislav.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0017 Kornislav in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a > *(int*)b) return -1;
	else return 0;
}

int main() {
	int ans, v[4];
	cin >> v[0] >> v[1] >> v[2] >> v[3];
	qsort(v, 4, sizeof(int), compare);
	ans = v[0] * v[2];
	cout << ans << endl;
	return 0;
}
