//============================================================================
// Name        : 0034 - Quadeq.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0034 สมการกำลังสอง (quadeq) in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int A, B, C, D[2];
	int a, b, c, d;
	double z;
	cin >> A >> B >> C;
	d = (B*B) - (4*A*C);
	if (d < 0) {
		cout << "No Solution";
		return 0;
	}
	z = sqrt(d);
	D[0] = (B-z)/2;
	D[1] = (B+z)/2;
	z = sqrt(A);
	for (a = 1; a <= z; ++a) {
		if (A%a == 0) {
			c = A/a;
			for (int j = 0; j < 2; ++j) {
				if (D[j]%c == 0) {
					b = D[j]/c;
					if (C%b == 0) {
						d = C/b;
						if (B == a*d + b*c) {
							cout << a << ' ' << b << ' ' << c << ' ' << d;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << "No Solution";
	return 0;
}
