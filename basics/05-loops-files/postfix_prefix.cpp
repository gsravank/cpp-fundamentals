#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int num = 10;
  cout << "Original number: " << num << "\n";

  cout << "num++: " << num++ << "\n";
  cout << "num after num++: " << num << "\n";
  num = 10;
  cout << "++num: " << ++num << "\n";
  cout << "num after ++num: " << num << "\n";

//   int a = 10, b = 10;
//   int c = ++(a * b); // error because ++ should operate on an l-value
//   cout << c << "\n";
  return 0;
}