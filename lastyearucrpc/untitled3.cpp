#include <iostream>

using namespace std;

int main() {
	int d;
	cin >> d;
	
	vector<char> line(d*d);
	int pointd;
	int points;
	
	for (unsigned i = 0; i < line.size(); ++i) {
		cin >> line.at(i);
		if (line.at(i) == 'd') {
			pointd = i;
		}
		else if (line.at(i) == 's') {
			points = i;
		}
	}
	
	int start = 0;
	if (points and pointd are not on the same row) {
		for (int i = start; i < line.size(); ++i) {
		}
	}
	
	
	//5 x 5
	/*
	5
. d . . .
. t t t t
. . t t t
t . . . t
t t t s .
*/
	
	
	return 0;
}