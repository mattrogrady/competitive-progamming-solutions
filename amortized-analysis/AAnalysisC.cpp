#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int good = 0;
	int m;
	long long answer;
	cin >> m;
	
	int georgeprepared;
	cin >> georgeprepared;
	
	vector<long long> requirements(m);
	for (unsigned i = 0; i < m; ++i) {
		cin >> requirements.at(i);
	}
	
	vector<long long> georgecomplex(georgeprepared);
	for (unsigned i = 0; i < georgeprepared; ++i) {
		cin >> georgecomplex.at(i);
	}
	
	for (unsigned i = 0; i < georgeprepared; ++i) {
		for (unsigned j = 0; j < requirements.size(); ++j) {
			if (georgecomplex.at(i) >= requirements.at(j)) {
				good += 1;
				requirements.erase(requirements.begin() + j);
				break;
			}
		}
	}
	
	if (m - good < 0) {
		cout << 0 << endl;
	}
	else { 
		cout << m - good << endl;
	}
	
	return 0;
}