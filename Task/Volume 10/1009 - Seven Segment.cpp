//============================================================================
// Name        : 1009 - Seven Segment.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1009 Seven Segment in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

const int seqment[10] = {
		0b101011110,
		0b000010010,
		0b100111100,
		0b100110110,
		0b001110010,
		0b101100110,
		0b101101110,
		0b100010010,
		0b101111110,
		0b101110110
};

int main() {
	int n, m;
	unsigned long long x, y, ans;
	int num1[10] = {0};
	int num2[10] = {0};
	string txt;
	cin >> n >> m;
	getline(cin, txt);
	for (int i = 0; i < 3; ++i) {
		getline(cin, txt);
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < 3; ++k) {
				x = (j*4)+k;
				if (txt.length() > x && txt[x] != ' ') { num1[j]++; }
				num1[j] <<= 1;
			}
		}
	}
	for (int i = 0; i < 3; ++i) {
		getline(cin, txt);
		for (int j = 0; j < m; ++j) {
			for (int k = 0; k < 3; ++k) {
				y = (j*4)+k;
				if (txt.length() > y && txt[y] != ' ') { num2[j]++; }
				num2[j] <<= 1;
			}
		}
	}
	x = 0;
	for (int i = 0; i < n; ++i) {
		x *= 10;
		for (int j = 0; j < 10; ++j) {
			if (num1[i] == seqment[j]) {
				x += j;
				break;
			}
		}
	}
	y = 0;
	for (int i = 0; i < m; ++i) {
		y *= 10;
		for (int j = 0; j < 10; ++j) {
			if (num2[i] == seqment[j]) {
				y += j;
				break;
			}
		}
	}
	ans = x + y;
	cout << ans;
	return 0;
}
