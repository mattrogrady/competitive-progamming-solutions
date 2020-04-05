/*
There are two types of burgers in your restaurant — hamburgers and chicken burgers! To assemble a hamburger you need two buns and a beef patty. To assemble a chicken burger you need two buns and a chicken cutlet.

You have 𝑏 buns, 𝑝 beef patties and 𝑓 chicken cutlets in your restaurant. You can sell one hamburger for ℎ dollars and one chicken burger for 𝑐 dollars. Calculate the maximum profit you can achieve.

You have to answer 𝑡 independent queries.

Input
The first line contains one integer 𝑡 (1≤𝑡≤100) – the number of queries.

The first line of each query contains three integers 𝑏, 𝑝 and 𝑓 (1≤𝑏, 𝑝, 𝑓≤100) — the number of buns, beef patties and chicken cutlets in your restaurant.

The second line of each query contains two integers ℎ and 𝑐 (1≤ℎ, 𝑐≤100) — the hamburger and chicken burger prices in your restaurant.

Output
For each query print one integer — the maximum profit you can achieve.
*/

#include <iostream>

using namespace std;

int main() {
  int q;
  cin >> q;

  int bun;
  int patty;
  int cutlet;

  int hamPrice;
  int chickenPrice;

  int numBurgers = 0;

  int profit = 0;

  for (int i = 0; i < q; ++i) {
    cin >> bun;
    cin >> patty;
    cin >> cutlet;

    cin >> hamPrice;
    cin >> chickenPrice;

    /*
    15 2 3
    5 10
    */

    numBurgers = bun / 2;

    if (hamPrice > chickenPrice) {
      if (patty > numBurgers) {
        profit = numBurgers * hamPrice;
        numBurgers = 0;
        patty -= numBurgers;
      }
      else {
        profit = patty * hamPrice;
        numBurgers -= patty;
        patty = 0;
      }
    }
    else {
      if (cutlet > numBurgers) {
        profit = numBurgers * chickenPrice;
        numBurgers = 0;
        cutlet -= numBurgers;
      }
      else {
        profit = cutlet * chickenPrice;
        numBurgers -= cutlet;
        cutlet = 0;
      }
    }

    for (int j = 0; j < numBurgers; ++j) {
      if (cutlet > 0) {
        profit += chickenPrice;
        cutlet--;
      }
      else if (patty > 0) {
        profit += hamPrice;
        patty--;
      }
    }

    cout << profit << endl;
  }

  return 0;
}
