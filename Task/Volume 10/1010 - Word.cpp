//============================================================================
// Name        : 1010 - Word.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1010 Word in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, m, p, lng;
	int di[8];
	string ch, table[30];
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> table[i];
		lng = table[i].length();
		for (int j = 0; j < lng; ++j) {
			table[i][j] = tolower(table[i][j]);
		}
	}
	cin >> p;
	while (p--) {
		cin >> ch;
		lng = ch.length();
		for (int i = 0; i < lng; ++i) { ch[i] = tolower(ch[i]); }

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (ch[0] == table[i][j]) {
					for (int k = 0; k < 8; ++k) { di[k] = 1; }
					for (int k = 1; k < lng; ++k) {
						if (lng-1 <= i) {
							if(ch[k] == table[i-k][j]) { di[0]++; }
							if (lng-1 <= j) {
								if(ch[k] == table[i-k][j-k]) { di[7]++; }
							}
							if (j+lng <= m) {
								if(ch[k] == table[i-k][j+k]) { di[1]++; }
							}
						}
						if (i+lng <= n) {
							if(ch[k] == table[i+k][j]) { di[4]++; }
							if (lng-1 <= j) {
								if(ch[k] == table[i+k][j-k]) { di[3]++; }
							}
							if (j+lng <= m) {
								if(ch[k] == table[i+k][j+k]) { di[5]++; }
							}
						}
						if (lng-1 <= j) {
							if(ch[k] == table[i][j-k]) { di[6]++; }
						}
						if (j+lng <= m) {
							if(ch[k] == table[i][j+k]) { di[2]++; }
						}
					}
					for (int k = 0; k < 8; ++k) {
						if (di[k] == lng) {
							cout << i << ' ' << j << endl;
							goto end;
						}
					}
				}
			}
		}
		end:;
	}
	return 0;
}
