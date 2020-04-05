#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long numdorm;
	long long numletters;
	long long dormanswer;
	long long roomanswer;
	long long runningdorm;
	long long help;
	long long start = 1;
	
	cin >> numdorm;
	cin >> numletters;
	
	vector<long long> roomsperdorm(numdorm);
	
	for (unsigned i = 0; i < numdorm; ++i) {
		cin >> roomsperdorm.at(i);
	}
	
	vector<long long> destination(numletters);
	for (unsigned i = 0; i < numletters; ++i) {
		cin >> destination.at(i);
	}
	
	// Program Loop
	runningdorm = roomsperdorm.at(0);
	for (unsigned i = 0; i < numletters; ++i) {
		
		dormanswer = 0;
		roomanswer = 0;
		
		for (unsigned j = start; j < numdorm; ++j) {
			if (destination.at(i) <= runningdorm) {
				dormanswer = j;
				break;
			}
			else {	
				help = runningdorm;
				runningdorm += roomsperdorm.at(j);
			}		
		}
		
		if (dormanswer == 0) {
			dormanswer = numdorm;
		}
		
		if (dormanswer == 1) {
			roomanswer = destination.at(i);
		}
		else {
			roomanswer = destination.at(i) - help;
		}
		
		cout << dormanswer << ' ' << roomanswer << endl;
		
		start = dormanswer;	
	}
	
	return 0;
}

