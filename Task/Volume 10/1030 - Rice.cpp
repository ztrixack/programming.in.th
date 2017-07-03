//============================================================================
// Name        : 1030 - Rice.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1030 Rice in C++, Ansi-style
// Run time    : 0.340 s
//============================================================================

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100005

struct riceStruct{
	double price;
	int kilo;
} rice[MAX];

int compare(const void* a, const void* b) {
	if ( ((riceStruct*)a)->price > ((riceStruct*)b)->price )
		return 1;
	else if ( ((riceStruct*)a)->price > ((riceStruct*)b)->price )
		return -1;
	else
		return 0;
}

int main() {
	int k, m, p, q;
	int b[MAX];
	double ans[MAX] = {0};

	cin >> k;
	for (int i = 0; i < k; ++i) {
		cin >> p >> q;
		rice[i].kilo = q;
		rice[i].price = (double)p/q;
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}

	qsort(rice, k, sizeof(riceStruct), compare);
	k = 0;
	for (int i = 0; i < m; ++i) {
		while (b[i] > rice[k].kilo) {
			ans[i] += rice[k].kilo * rice[k].price;
			b[i] -= rice[k].kilo;
			k++;
		}
		ans[i] += b[i] * rice[k].price;
		rice[k].kilo -= b[i];
	}

	for (int i = 0; i < m; ++i) {
		printf("%.3f\n", ans[i]);
	}
	return 0;
}
