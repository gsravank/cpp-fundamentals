#include <iostream>

using namespace std;

int main() {
  float singleP = 0.00001234234;
  double doubleP = 0.000000000001234324;
  long double longDP = -0.000000000000000000234123123;

  cout << singleP << " " 
       << doubleP << " " 
       << longDP << "\n";
  return 0;
}