#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int a = 5, b = 12;

  double c = a/b;
  double d = static_cast<double>(a) / b;
  double e = a/static_cast<double>(b);

  cout << c << " " << d << " " << e << endl;
  return 0;
}