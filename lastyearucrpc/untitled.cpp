#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int q;
	vector<string> brawlername;
	vector<int> brawlerdamage;
	vector<long long> brawlerdelay;
	vector<long long> brawlerspeed;
	vector<long long> damagedealt;
	string maxname;
	int numbrawlers;
	long long timeduration;
	
	cin >> q;
	
	for (unsigned i = 0; i < q; ++i) {
		long long runningsum = 0;
		long long max = 0;
		
		cin >> numbrawlers >> timeduration;
		timeduration+= 1;
				
		brawlername.resize(numbrawlers);
		brawlerdamage.resize(numbrawlers);
		brawlerspeed.resize(numbrawlers);
		brawlerdelay.resize(numbrawlers);
		damagedealt.resize(numbrawlers);
		
		for (unsigned i = 0; i < numbrawlers; ++i) {
			long long timespecific = timeduration;
			cin >> brawlername.at(i) >> brawlerdamage.at(i) >> brawlerdelay.at(i) >> brawlerspeed.at(i);
			timespecific -= brawlerdelay.at(i);
			damagedealt.at(i) = brawlerdamage.at(i) * ceil((double)timespecific/brawlerspeed.at(i));
			runningsum += damagedealt.at(i);
			if (damagedealt.at(i) > max) {
				max = damagedealt.at(i);
				maxname = brawlername.at(i);
			}
		}
		
		cout << maxname << ' ' << max << endl;
		cout << runningsum << endl;
	}
	
	return 0;
	/*
	int x = 1000;
	int y = 3; 
	int d = 0;
	int z;
	int t = 101;
	
	z = x * ((t/y) + 1) - ((d/y) * x);
	//damagedealt.at(i) = brawlerdamage.at(i) * (timeduration/brawlerspeed.at(i)) - ((brawlerdelay.at(i)/brawlerspeed.at(i)) * brawlerdamage.at(i));
	
	cout << z << endl;
	*/
	/*
	2
3 5
Darryl 1000 1 2
Poco 500 0 3
Barley 100 0 1
6 100
Barley 100 0 1
Colt 2500 20 5
Frank 3000 5 8
Shelly 6000 10 8
Piper 4000 95 6
Bull 4000 0 3
*/
}

//0 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 63 66 69 72 75 78 81 84 87 90 93 96 99