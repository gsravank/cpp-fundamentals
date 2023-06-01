#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int whole;
  double fractional;
  char letter;

  cout << "Enter an int, a double and a char: ";
  cin >> whole >> fractional >> letter; 
  // this is first stored in an area of memory 
  // called keyboard buffer

  cout << "Whole: " << whole << "\n";
  cout << "Fractional: " << fractional << "\n";
  cout << "Letter: " << letter << "\n";
  return 0;
}