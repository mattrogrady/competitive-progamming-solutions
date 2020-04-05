// INCORRECT: FAILED TEST CASE 6

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	unsigned i;
	int num4 = 0;
	int num8 = 0;
	int num15 = 0;
	int num16 = 0;
	int num23 = 0;
	int num42 = 0;
	int answer = 0;
	int badnum = 0;
	int k = 0;
	
	cin >> n;
	
	vector <int> ele(n);
	
	for (i = 0; i < n; ++i) {
		cin >> ele.at(i);
		if (ele.at(i) == 4) {
			num4 += 1;
		}
		if (ele.at(i) == 8) {
			num8 += 1;
			if (num4 < num8) {
				num8 -= 1;
				badnum += 1;
			}
		}
		if (ele.at(i) == 15) {
			num15 += 1;
			if (num8 < num15) {
				num15 -= 1;
				badnum += 1;
			}
		}
		if (ele.at(i) == 16) {
			num16 += 1;
			if (num15 < num16) {
				num16 -= 1;
				badnum += 1;
			}
		}
		if (ele.at(i) == 23) {
			num23 += 1;
			if (num16 < num23) {
				num23 -= 1;
				badnum += 1;
			}
		}
		if (ele.at(i) == 42) {
			num42 += 1;
			if (num23 < num42) {
				num42 -= 1;
				badnum += 1;
			}
		}
	}
	
	k = num4 + num8 + num15 + num16 + num23 + num42;
	k %= 6;
	badnum += k;
	
	cout << badnum << endl;
	
	return 0;
}