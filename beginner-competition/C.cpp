/*
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
*/

#include <iostream>

using namespace std;

int main() {
  int year;
  cin >> year;

  bool distinct = false;

  int digit1;
  int digit2;
  int digit3;
  int digit4;

  while (!distinct) {
    year += 1;
    digit1 = year % 10;
    digit2 = (year / 10) % 10;
    digit3 = (year / 100) % 10;
    digit4 = (year / 1000);

    if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4) {
      if (digit2 != digit3 && digit2 != digit4) {
        if (digit3 != digit4) {
          distinct = true;
        }
      }
    }
  }

  cout << year << endl;

  return 0;
}
