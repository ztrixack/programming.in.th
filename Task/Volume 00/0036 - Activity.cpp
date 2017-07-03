//============================================================================
// Name        : 0036 - Activity.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0036 กิจกรรมยามว่าง (activity) in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, mid;
	unsigned long long ans;
	unsigned long long div = 1;
	unsigned long long m = 1;

	cin >> n;
	mid = n - (n/2);
	for (int i = 2; i <= n/2; ++i) { div *= i; };
	for (int i = mid+1; i <= n; ++i) { m *= i; };
	ans = m/div;
	if (n % 2 == 1) ans <<= 1;
	cout << ans;
	return 0;
}
