#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int var = 10;

void f1() {
  var++;
  cout << "Var: " << var << endl;
}

void f2() {
  int var = 0;
  cout << "Var: " << var << endl;
}

int main() {
  f1();
  f2();

  return 0;
}