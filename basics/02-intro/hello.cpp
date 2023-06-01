#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {
  const double cm_per_inch = 2.54;
  double length = 1;
  char unit;

  cout << "Length follwed by unit: ";
  cin >> length >> unit;

  if (unit == 'i') {
    cout << length << "in == " << cm_per_inch * length << "cm\n";
  } else if (unit == 'c') {
    cout << length << "cm == " << length / cm_per_inch << "in\n";
  } else {
    cout << "Unknown unit " << unit << "\n";
  }

  switch (unit) {
  case 'i':
    cout << length << "in == " << cm_per_inch * length << "cm\n";
    break;
  case 'c':
    cout << length << "cm == " << length / cm_per_inch << "in\n";
    break;
  default:
    cout << "Unknown unit " << unit << "\n";
    break;
  }
  return 0;
}