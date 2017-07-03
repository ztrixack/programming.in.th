//============================================================================
// Name        : 1021 - Machine.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1021 Machine in C++, Ansi-style
// Run time    : 0.188 s
//============================================================================

#include <iostream>
using namespace std;

struct item {
	int price;
	item *link;
};

int main() {
	int n, p, q;
	int ans[300005];
	char command;

	item start;
	item end;
	item *newitem;
	item *current;

	start.link = &end;
	end.link = 0;

	q = 0;
	cin >> n;
	while (n--) {
		cin >> command;
		if (command == 'P') {
			cin >> p;

			newitem = new item;
			newitem->price = p;
			current = &start;

			while (current->link != &end) {
				if (current->link->price < p) break;
				current = current->link;
			}
			newitem->link = current->link;
			current->link = newitem;
		} else if (command == 'Q') {
			current = &start;
			newitem = current->link;
			if (newitem == &end) {
				ans[q] = -1;
				q++;
				continue;
			}
			ans[q] = newitem->price;
			current->link = newitem->link;
			q++;
		}
	}
	for (int i = 0; i < q; ++i) {
		printf("%d\n", ans[i]);
	}
	return 0;
}
