#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

void print3dArray(int arr[][2][2], int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < 2; ++j) {
      for (int k = 0; k < 2; ++k) {
        cout << arr[i][j][k] << "(" << i << "," << j << "," << k << ") ";
      }
      cout << "\n";
    }
    cout << "=====================\n";
  }
}

int main() {
  int numbers[2][2][2] = {{{0, 2}, {5, 3}}, {{7, 3}, {4, 0}}};
  print3dArray(numbers, 2);

  return 0;
}