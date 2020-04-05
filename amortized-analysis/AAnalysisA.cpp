#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector<int> cards;
	
	cin >> n;
	cards.resize(n);
	
	int player1 = 0;
	int player2 = 0;
	
	for (unsigned i = 0; i < n; ++i) {
		cin >> cards.at(i);
	}
	
	while (cards.size() > 1) {
		if (cards.at(0) > cards.at(cards.size() - 1)) {
			player1 += cards.at(0);
			cards.erase(cards.begin());
		}
		else {
			player1 += cards.at(cards.size() - 1);
			cards.pop_back();
		}
		if (cards.at(0) > cards.at(cards.size() - 1)) {
			player2 += cards.at(0);
			cards.erase(cards.begin());
		}
		else {
			player2 += cards.at(cards.size() - 1);
			cards.pop_back();
		}
	}
	
	if (n % 2 != 0) {
		player1 += cards.at(0);
	}
	
	cout << player1 << ' ' << player2 << endl;
	
	return 0;
}
 