//============================================================================
// Name        : 0028 - Worldcup.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 0028	ฟุตบอลโลก (worldcup) in C++, Ansi-style
// Run time    : 0.000 s
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

struct teamStructer {
	int scr;
	int diff;
	int goal;
	string name;
} team[4];

int compare (const void* a, const void* b) {
	int comp;
	comp = ((teamStructer*)b)->scr - ((teamStructer*)a)->scr;
	if (comp != 0) return comp;
	comp = ((teamStructer*)b)->diff - ((teamStructer*)a)->diff;
	if (comp != 0) return comp;
	comp = ((teamStructer*)b)->goal - ((teamStructer*)a)->goal;
	return comp;
}

int main() {
	int score[4][4], diff;
	for (int i = 0; i < 4; ++i) {
		cin >> team[i].name;
		team[i].scr = 0;
		team[i].diff = 0;
		team[i].goal = 0;
	}
	for (int i = 0; i < 4; ++i) { for (int j = 0; j < 4; ++j) { cin >> score[i][j]; } }
	for (int i = 0; i < 4; ++i) {
		for (int j = i+1; j < 4; ++j) {
			diff = score[i][j] - score[j][i];
			if (diff > 0) {
				team[i].scr += 3;
				team[i].diff += diff;
				team[j].diff -= diff;
			} else if (diff < 0) {
				team[j].scr += 3;
				team[i].diff += diff;
				team[j].diff -= diff;
			} else {
				team[i].scr++;
				team[j].scr++;
			}
			team[i].goal += score[i][j];
			team[j].goal += score[j][i];
		}
	}
	qsort (team, 4, sizeof(teamStructer), compare);
	for (int i = 0; i < 4; ++i) { cout << team[i].name << " " << team[i].scr << endl; }
	return 0;
}
