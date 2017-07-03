//============================================================================
// Name        : 1011 - Block Game.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1011 Block Game in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, m, p;
	int x, y, scr;
	char c;
	char ch[15][15];
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> ch[i][j];
		}
	}
	scr = 0;
	cin >> p;
	while (p--) {
		cin >> y >> x >> c;
		if (ch[y][x] == '#' || ch[y][x] == '-') {
			scr -= 5;
			continue;
		}
		if (c == 'L' && ch[y][x-1] == '-') {
			ch[y][x-1] = ch[y][x];
			ch[y][x--] = '-';
		} else if(c == 'R' && ch[y][x+1] == '-') {
			ch[y][x+1] = ch[y][x];
			ch[y][x++] = '-';
		} else {
			scr -= 5;
			continue;
		}
		if (ch[y+1][x] != '-') {
			c = ch[y][x];
			if (ch[y][x-1] == c) {
				ch[y][x] = '-';
				ch[y][x-1] = '-';
				scr += 5;
			}
			if (ch[y][x+1] == c) {
				ch[y][x+1] = '-';
				ch[y][x] = '-';
				scr += 5;
			}
			if (ch[y+1][x] == c) {
				ch[y+1][x] = '-';
				ch[y][x] = '-';
				scr += 5;
			}
			if (ch[y][x] == '-') {
				scr += 5;
			}
		}

		for (int i = n-2; i > 0; --i) {
			for (int j = m-2; j > 0; --j) {
				if (ch[i][j] != '-') { continue; }
				if (ch[i-1][j] != '-' && ch[i-1][j] != '#') {
					for (int k = i; k < n; ++k) {
						if (ch[k][j] != '-') {
							ch[k-1][j] = ch[i-1][j];
							ch[i-1][j] = '-';
							i = k-1;
							break;
						}
					}
					c = ch[i][j];
					if (ch[i][j-1] == c) {
						ch[i][j] = '-';
						ch[i][j-1] = '-';
						scr += 5;
					}
					if (ch[i][j+1] == c) {
						ch[i][j+1] = '-';
						ch[i][j] = '-';
						scr += 5;
					}
					if (ch[i+1][j] == c) {
						ch[i+1][j] = '-';
						ch[i][j] = '-';
						scr += 5;
					}
					if (ch[i][j] == '-') {
						scr += 5;
					}
					j = m;
				}
			}
		}
	}
	cout << scr << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << ch[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
