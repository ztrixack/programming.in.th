//============================================================================
// Name        : 1054 - Tile.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1054 Tile in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct circle {
	int x;
	int y;
	int r;
} cc[1000005];

int compare (const void* a, const void* b) {
	if (((circle*)a)->x > ((circle*)b)->x) {
		return 1;
	} else if (((circle*)a)->x < ((circle*)b)->x) {
		return -1;
	} else {
		return 0;
	}
}

int main() {
	int n;
	int xx, yy, xy, rr;
	int c = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> cc[i].x >> cc[i].y >> cc[i].r;
	}
	qsort(cc, n, sizeof(circle), compare);
	for (int i = 0; i < n; ++i) {
		for (int j = i+1; j < n; ++j) {
			if (cc[j].x - cc[i].x > 20) {
				break;
			}
			xx = cc[i].x - cc[j].x;
			xx *= xx;
			yy = cc[i].y - cc[j].y;
			yy *= yy;
			xy = xx + yy;
			rr = cc[i].r + cc[j].r;
			rr *= rr;
			if (xy < rr) {
				c++;
			}
		}
	}
	printf("%d", c);
	return 0;
}
