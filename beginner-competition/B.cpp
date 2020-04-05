/*
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> row1(5);
  vector<int> row2(5);
  vector<int> row3(5);
  vector<int> row4(5);
  vector<int> row5(5);

  bool inRow1 = false;
  bool inRow2 = false;
  bool inRow3 = false;
  bool inRow4 = false;
  bool inRow5 = false;

  int position = 0;

  int answer = 0;

  for (int i = 0; i < 5; ++i) {
    cin >> row1.at(i);
    if (row1.at(i) == 1) {
      inRow1 = true;
      position = i + 1;
    }
  }
  for (int i = 0; i < 5; ++i) {
    cin >> row2.at(i);
    if (row2.at(i) == 1) {
      inRow2 = true;
      position = i + 1;
    }
  }
  for (int i = 0; i < 5; ++i) {
    cin >> row3.at(i);
    if (row3.at(i) == 1) {
      inRow3 = true;
      position = i + 1;
    }
  }
  for (int i = 0; i < 5; ++i) {
    cin >> row4.at(i);
    if (row4.at(i) == 1) {
      inRow4 = true;
      position = i + 1;
    }
  }
  for (int i = 0; i < 5; ++i) {
    cin >> row5.at(i);
    if (row5.at(i) == 1) {
      inRow5 = true;
      position = i + 1;
    }
  }

  if (inRow1) {
    answer += 2;
    if (position == 1 || position == 5) {
      answer += 2;
    }
    else if (position == 2 || position == 4) {
      answer += 1;
    }
  }
  else if (inRow2) {
    answer += 1;
    if (position == 1 || position == 5) {
      answer += 2;
    }
    else if (position == 2 || position == 4) {
      answer += 1;
    }
  }
  else if (inRow3) {
    if (position == 1 || position == 5) {
      answer += 2;
    }
    else if (position == 2 || position == 4) {
      answer += 1;
    }
  }
  else if (inRow4) {
    answer += 1;
    if (position == 1 || position == 5) {
      answer += 2;
    }
    else if (position == 2 || position == 4) {
      answer += 1;
    }
  }
  else {
    answer += 2;
    if (position == 1 || position == 5) {
      answer += 2;
    }
    else if (position == 2 || position == 4) {
      answer += 1;
    }
  }

  cout << answer << endl;

  return 0;
}
