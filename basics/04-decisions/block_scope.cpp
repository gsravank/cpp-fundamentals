#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int number;
  cout << "Provide a number between [0, 10]: ";
  cin >> number;

  if (true) {
    int number;
    cout << "Provide a different number: ";
    cin >> number;
    cout << "Number inside braces: " << number << "\n";
  }
  cout << "Number outside braces: " << number << "\n";
  return 0;
}