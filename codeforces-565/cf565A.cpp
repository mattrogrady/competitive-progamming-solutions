#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int q;
	long long n;
	int moves = 0;
	bool impossible = false;
	
	cin >> q;
	
	for (unsigned i = 0; i < q; ++i) {
		moves = 0;
		impossible = false;
		cin >> n;
		
		while ((n > 1) && (impossible == false)) {
			while (n % 2 == 0) {
				n /= 2;
				moves += 1;
			}
			
			while (n % 3 == 0) {
				n = (n * 2) / 3;
				moves += 1;
			}
			
			while (n % 5 == 0) {
				n = (n * 4) / 5;
				moves += 1;
			}
			
			if ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n != 1)) {
				impossible = true;
			}
		}
		if (impossible == true) {
			cout << -1 << endl;
		}
		else {
			cout << moves << endl;
		}
	}
}

/*
7
1
10
25
30
14
27
1000000000000000000
*/