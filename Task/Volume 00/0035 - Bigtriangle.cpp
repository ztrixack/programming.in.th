//============================================================================
// Name        : 0035 - Bigtriangle.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0035 สามเหลี่ยมใหญ่ (bigtriangle) in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

#define X(i)		t[i][0]
#define Y(i)		t[i][1]
#define XY(i, j)	t[i][0]*t[j][1]

int main() {
	int n, x, y;
	int t[105][2];
	double vec, max = 0;
	cout.precision(3);
	cout.setf(ios::floatfield, ios::fixed);

	cin >> n;
	for (int i = 0; i < n; ++i) { cin >> X(i) >> Y(i); }
	for (int t1 = 0; t1 < n; ++t1) {
		for (int t2 = t1+1; t2 < n; ++t2) {
			for (int t3 = t2+1; t3 < n; ++t3) {
				if (t3 != t1 && t3 != t2) {
					x = XY(t1, t2) + XY(t2, t3) + XY(t3, t1);
					y = XY(t2, t1) + XY(t3, t2) + XY(t1, t3);
					vec = abs((double)x - y) / 2.0;
					if (max < vec) max = vec;
				}
			}
		}
	}

	cout << max;
	return 0;
}
