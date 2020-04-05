#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int q;
	int num;
	unsigned i;
	vector<long long> n;
	int answer;
	int num1;
	int num2;
	
	cin >> q;
	
	for (unsigned i = 0; i < q; ++i) {
		cin >> num;
		n.resize(num);
		answer = 0;
		num1 = 0;
		num2 = 0;
		
		for (unsigned i = 0; i < n.size(); ++i) {
			cin >> n.at(i);
			n.at(i) %= 3;
		}
		
		for (unsigned i = 0; i < n.size(); ++i) {
			if (n.at(i) == 0) {
				answer += 1;
			}
			else {
				if (n.at(i) == 1) {
					num1 += 1;
				}
				if (n.at(i) == 2) {
					num2 += 1;
				}
			}
		}
		
		if (num2 > num1) {
			answer += num1;
			num2 -= num1;
			num2 /= 3;
			answer += num2;
			// if there are 3 2's then another divisible
		}
		else {
			answer += num2;
			num1 -= num2;
			num1 /= 3;
			answer += num1;
			// if there are 3 1's then another divisible
		}
			
		cout << answer << endl;
	}

}