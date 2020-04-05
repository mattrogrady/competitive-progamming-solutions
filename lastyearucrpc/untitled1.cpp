#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long ndungeon;
	cin >> ndungeon;
	
	vector<string> dungeonname(ndungeon);
	vector<long long> dungeonminlevel(ndungeon);
	
	for (unsigned i = 0; i < ndungeon; ++i) {
		cin >> dungeonname.at(i) >> dungeonminlevel.at(i);
	}
	
	long long q;
	cin >> q;
	
	vector<long long> playerlevel(q);
	for (unsigned i = 0; i < q; ++i) {
		cin >> playerlevel.at(i);
	}
	
	bool good = false;
	sort(playerlevel.begin(),playerlevel.end());
	for (unsigned i = 0; i < q; ++i) {
		for (unsigned j = 0; j < dungeonname.size(); ++j) {
			if (playerlevel.at(i) >= dungeonminlevel.at(j)) {
				cout << dungeonname.at(j) << endl;
				dungeonname.erase(dungeonname.begin() + j);
				dungeonminlevel.erase(dungeonminlevel.begin() + j);
				good = true;
			}
		}
		if (!good) {
			cout << "none" << endl;
		}
	}
	
	return 0;
}