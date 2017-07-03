//============================================================================
// Name        : 1049 - Runner.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1049 Runner in C++, Ansi-style
// Run time    : 0.176 s
//============================================================================

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n, m, Ai, Li, Si;
	int cntW = 0;
	int round[10005] = {0};
	int winner[100005][3] = {{0}};

	cin >> n >> m;
	while (n--) {
		cin >> Ai >> Li >> Si;
		if (Si > winner[round[Li]][2]) {
			winner[round[Li]][2] = Si;
			winner[round[Li]][1] = Li;
			winner[round[Li]][0] = Ai;
		} else if (Si == winner[round[Li]][2] && Li < winner[round[Li]][1]) {
			winner[round[Li]][1] = Li;
			winner[round[Li]][0] = Ai;
		}
		round[Li]++;
		if (round[Li] > cntW) {
			cntW = round[Li];
		}
	}
	for (int i = 0; i < cntW; ++i) {
		printf("%d\n", winner[i][0]);
	}
	return 0;
}
