/*
You are given two matrices 𝐴 and 𝐵. Each matrix contains exactly 𝑛 rows and 𝑚 columns. Each element of 𝐴 is either 0 or 1; each element of 𝐵 is initially 0.

You may perform some operations with matrix 𝐵. During each operation, you choose any submatrix of 𝐵 having size 2×2, and replace every element in the chosen submatrix with 1. In other words, you choose two integers 𝑥 and 𝑦 such that 1≤𝑥<𝑛 and 1≤𝑦<𝑚, and then set 𝐵𝑥,𝑦, 𝐵𝑥,𝑦+1, 𝐵𝑥+1,𝑦 and 𝐵𝑥+1,𝑦+1 to 1.

Your goal is to make matrix 𝐵 equal to matrix 𝐴. Two matrices 𝐴 and 𝐵 are equal if and only if every element of matrix 𝐴 is equal to the corresponding element of matrix 𝐵.

Is it possible to make these matrices equal? If it is, you have to come up with a sequence of operations that makes 𝐵 equal to 𝐴. Note that you don't have to minimize the number of operations.

Input
The first line contains two integers 𝑛 and 𝑚 (2≤𝑛,𝑚≤50).

Then 𝑛 lines follow, each containing 𝑚 integers. The 𝑗-th integer in the 𝑖-th line is 𝐴𝑖,𝑗. Each integer is either 0 or 1.

Output
If it is impossible to make 𝐵 equal to 𝐴, print one integer −1.

Otherwise, print any sequence of operations that transforms 𝐵 into 𝐴 in the following format: the first line should contain one integer 𝑘 — the number of operations, and then 𝑘 lines should follow, each line containing two integers 𝑥 and 𝑦 for the corresponding operation (set 𝐵𝑥,𝑦, 𝐵𝑥,𝑦+1, 𝐵𝑥+1,𝑦 and 𝐵𝑥+1,𝑦+1 to 1). The condition 0≤𝑘≤2500 should hold.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  int matrixA[n][m];
  int matrixB[n][m];

  bool impossible = false;

  int numOperations = 0;
  vector<int> operations;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> matrixA[i][j];
      matrixB[i][j] = 0;
    }
  }

  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < m - 1; ++j) {
      if (matrixA[i][j] == 1 && matrixA[i][j + 1] && matrixA[i + 1][j] && matrixA[i + 1][j + 1]) {
        // Perform operation on matrixB
        matrixB[i][j] = 1;
        matrixB[i][j + 1] = 1;
        matrixB[i + 1][j] = 1;
        matrixB[i + 1][j + 1] = 1;

        numOperations += 1;
        operations.push_back(i + 1);
        operations.push_back(j + 1);
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (matrixB[i][j] != matrixA[i][j]) {
        impossible = true;
      }
    }
  }

  if (impossible) {
    cout << -1 << endl;
  }
  else {
    cout << numOperations << endl;
    for (unsigned i = 0; i < operations.size(); ++i) {
      cout << operations.at(i);
      if (i % 2 == 0) {
        cout << ' ';
      }
      else {
        cout << endl;
      }
    }
  }

  return 0;
}
