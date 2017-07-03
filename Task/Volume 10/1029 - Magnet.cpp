//============================================================================
// Name        : 1029 - Magnet.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1029 Magnet in C++, Ansi-style
// Run time    : 0.264 s
//============================================================================

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int compare(const void* a, const void* b) {
	int comp = *(int*)a - *(int*)b;
	return comp;
}

int main() {
	int n, m, p, q, r, s;
	int a[200005], b[200005], ans[100005];
	int mid, start, end;

	cin >> n >> m >> q;
	p = 0;
	while (m--) {
		cin >> r >> s;
		if (r != 1) {
			a[p] = r;
			p++;
		}
		a[p] = r + s;
		p++;
	}
	a[p] = n+1;
	qsort(a, p, sizeof(int), compare);
	p = 1;
	for (int i = 0; a[i] <= n; ++i) {
		if (a[i] == a[i+1]) {
			i++;
			continue;
		}
		b[p] = a[i];
		p++;
	}
	b[0] = 1;
	b[p] = n+1;
	for (int i = 0; i < q; ++i) {
		cin >> r;
		start = 0;
		end = p;
		while (end != start+1) {
			mid = (start + end) / 2;
			if (r > b[mid]) {
				start = mid;
			} else if (r < b[mid]) {
				end = mid;
			} else {
				start = mid;
				end = mid+1;
			}
		}
		ans[i] = b[end] - b[start];
	}
	for (int i = 0; i < q; ++i) {
		printf("%d\n", ans[i]);
	}
	return 0;
}
