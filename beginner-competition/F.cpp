/*
Lenny is playing a game on a 3 × 3 grid of lights. In the beginning of the game all lights are switched on. Pressing any of the lights will toggle it and all side-adjacent lights. The goal of the game is to switch all the lights off. We consider the toggling as follows: if the light was switched on then it will be switched off, if it was switched off then it will be switched on.

Lenny has spent some time playing with the grid and by now he has pressed each light a certain number of times. Given the number of times each light is pressed, you have to print the current state of each light.

Input
The input consists of three rows. Each row contains three integers each between 0 to 100 inclusive. The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.

Output
Print three lines, each containing three characters. The j-th character of the i-th line is "1" if and only if the corresponding light is switched on, otherwise it's "0".
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> lights(9);
  string row1 = "";
  string row2 = "";
  string row3 = "";

  vector<int> light_current(9);

  for (int i = 0; i < 9; ++i) {
    cin >> lights.at(i);
    light_current.at(i) = 0;
  }

  light_current.at(0) += (lights.at(0) + lights.at(1) + lights.at(3));
  light_current.at(1) += (lights.at(0) + lights.at(1) + lights.at(2) + lights.at(4));
  light_current.at(2) += (lights.at(1) + lights.at(2) + lights.at(5));
  for (int i = 0; i < 3; ++i) {
    if (light_current.at(i) % 2 == 0) {
      row1 += '1';
    }
    else {
      row1 += '0';
    }
  }
  light_current.at(3) += (lights.at(0) + lights.at(3) + lights.at(4) + lights.at(6));
  light_current.at(4) += (lights.at(1) + lights.at(3) + lights.at(4) + lights.at(5) + lights.at(7));
  light_current.at(5) += (lights.at(2) + lights.at(4) + lights.at(5) + lights.at(8));
  for (int i = 3; i < 6; ++i) {
    if (light_current.at(i) % 2 == 0) {
      row2 += '1';
    }
    else {
      row2 += '0';
    }
  }
  light_current.at(6) += (lights.at(3) + lights.at(6) + lights.at(7));
  light_current.at(7) += (lights.at(4) + lights.at(6) + lights.at(7) + lights.at(8));
  light_current.at(8) += (lights.at(5) + lights.at(7) + lights.at(8));
  for (int i = 6; i < 9; ++i) {
    if (light_current.at(i) % 2 == 0) {
      row3 += '1';
    }
    else {
      row3 += '0';
    }
  }

  cout << row1 << endl << row2 << endl << row3 << endl;

  return 0;
}
