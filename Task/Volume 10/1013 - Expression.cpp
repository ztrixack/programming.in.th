//============================================================================
// Name        : 1013 - Expression.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1013 Expression in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

const char op[3] = {'+', '*', '^'};

int main() {
	int n, p, q, bracket, st, ed, length;
	int m[100];
	string exp, tmp;

	cin >> exp >> n;

	while (n--) {
		tmp = exp;
		for(p = 1; true; ++p) {
			cin >> q;
			if (q == 0) break;
			m[p] = q;
			st = 0;
			ed = -1;
			bracket = 0;
			for (int j = 0; j < 3 && q == m[p]; ++j) {
				length = tmp.length();
				for (int k = 0; k < length; ++k) {
					if (tmp[k] == '(') {
						bracket++;
					} else if (tmp[k] == ')') {
						bracket--;
					} else if (bracket == 0) {
						if (tmp[k] == op[j]) {
							st = ed+1;
							ed = k;
							q--;
							if (q == 0) {
								ed -= st;
								tmp = tmp.substr(st, ed);
								goto finish;
							}
						}
					}
				}
			}
			if (q == 1) {
				if (tmp[0] == '(' && q == m[p]) {
					tmp = tmp.erase(0, 1);
					tmp = tmp.erase(tmp.length()-1, 1);
				} else {
					st = ed+1;
					ed = tmp.length() - st;
					tmp = tmp.substr(st, ed);
				}
			} else {
				tmp = "null";
			}
			finish:;
		}
		for (int i = p-1; i > 0; --i) { cout << "op(" << m[i] << ','; }
		cout << 'p';
		for (int i = 1; i < p; ++i) { cout << ')'; }
		cout << '=' << tmp << endl;
	}
	return 0;
}
