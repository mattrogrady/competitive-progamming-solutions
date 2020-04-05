//
//  main.cpp
//  ICPC Mock Competitions
//
//  Created by Matt Ogrady on 12/20/19.
//  Copyright © 2019 Matt Ogrady. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    
    int queries;
    cin >> queries;
    
    int num;
    vector<int> candies;
    int count;
    
    for (int i = 0; i < queries; ++i) {
        
        cin >> num;
        candies.resize(num);
        
        for (int z = 0; z < num; ++z) {
            cin >> candies.at(z);
        }
        
        sort(candies.begin(), candies.end());
        
        // 1 4 8 4 5 6 3 8
        // 1 3 4 4 5 6 8 8
        for (int j = 1; j < num; ++j) {
            if (candies.at(j) != (candies.at(j - 1))) {
                count += 1;
            }
        }
        
        cout << count;
    }
    
    return 0;
}
