#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int val1 = 5;
  int val2(5);
  int val3 {5}; // C++ 11 and above

  int val4 {5.0}; // should produce error
  
  return 0;
}