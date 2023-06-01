#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  short int a = 32767;
  cout << a << endl;
  a += 1;
  cout << a << endl;

  float test;

  test = 2.0e38 * 1000;
  cout << test << endl;

  test = 2.0e-38 / 2.0e38;
  cout << test << endl;
  return 0;
}