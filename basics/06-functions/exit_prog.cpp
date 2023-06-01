#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

void func() {
  cout << "This prog will terminate with exit func.\n";
  cout << "Bye!\n";
  exit(0);
  cout << "This message will not be displayed.\n";
}
int main() {
  func();
  return 0;
}