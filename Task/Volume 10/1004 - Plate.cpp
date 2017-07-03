//============================================================================
// Name        : 1004 - Plate.cpp
// Author      : ztrixack
// Copyright   : MIT License
// Description : 1004 Plate in C++, Ansi-style
// Run time    : 0.004 s
//============================================================================

#include <iostream>
using namespace std;

class student {
private:
	int classes;
	int id;
public:
	int getClass() { return classes; }
	void setClass(int num) { classes = num; }
	int getID() { return id; }
	void setID(int num) { id = num; }
	student *link;
};

int main() {
	int nc, ns, id, num;
	int table[10005];
	char oder;

	student first;
	student last;
	student *current;
	student *position;

	first.link = &last;
	last.link = 0;

	cin >> nc >> ns;
	for (int i = 0; i < ns; ++i) {
		cin >> num >> id;
		table[id] = num;
	}
	while (cin >> oder) {
		if (oder == 'E') {
			cin >> id;
			position = new student;
			position->setID(id);
			position->setClass(table[id]);

			current = &first;
			while (current->link != &last) {
				if (current->getClass() == table[id]) {
					while (current->link->getClass() == table[id]) {
						current = current->link;
					}
					break;
				}
				current = current->link;
			}
			position->link = current->link;
			current->link = position;
		} else if (oder == 'D') {
			current = &first;
			position = &first;
			if (current->link != &last) {
				current = current->link;
				position->link = current->link;
				cout << current->getID() << endl;
			}
		} else {
			cout << 0;
			break;
		}
	}
	return 0;
}
