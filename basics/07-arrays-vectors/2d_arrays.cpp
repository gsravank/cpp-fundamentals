#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

const int COLS = 2;

void print2dArray(int arr[][COLS], int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < COLS; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}

int main() {
  int table_a[3][2] = {{8, 5}, {7, 9}, {6, 3}};
  int table_b[3][3] = {{8, 5, 2}, {7, 9, 0}, {6, 3, 8}};

  print2dArray(table_a, 3);
  // print2dArray(table_b, 3); // this will throw error for no matching func

  return 0;
}