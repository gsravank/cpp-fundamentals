#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

void multiply(int& num, int mult=2) {
  num *= mult;
}

int main() {
  int orig = 10;
  cout << "Original: " << orig << "\n";

  multiply(orig);
  cout << "Original after multiply(): " << orig << "\n";

  
  return 0;
}