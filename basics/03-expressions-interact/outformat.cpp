#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <time.h>

using namespace std;

int main() {
  srand(time(NULL));

  int num[9];
  int tmp;
  for (int i = 0; i < 9; ++i) {
    if (i % 2 == 0) {
      tmp = rand() % 100;
      if (tmp <= 50) {
        num[i] = rand() % 1000;
      } else {
        num[i] = rand() % 10;
      }
    } else {
      tmp = rand() % 100;
      if (tmp <= 50) {
        num[i] = rand() % 100;
      } else {
        num[i] = rand() % 10000;
      }
    }
  }

  for (int i = 0; i < 9; ++i) {
    cout << setw(6) << num[i];
    if (i % 3 == 2) {
      cout << endl;
    }
  }
  return 0;
}