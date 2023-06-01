#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int num;
  cout << "Provide a flag (0/1): ";
  cin >> num;

  switch (num) {
    case 0:
      cout << "Flag is set to off\n";
      break;
    case 1:
      cout << "Flag is set to on\n";
      break;
    default:
      cout << "Provide one of 0/1 please\n";
      break;
  }
  
  return 0;
}