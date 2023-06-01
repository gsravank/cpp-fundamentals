#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

void showStatic() {
  static int statNum = 0;
  cout << "statNum: " << statNum << endl;
  statNum++;
}

int main() {
  for(int i = 0; i < 5; ++i) {
    showStatic();
  }
  return 0;
}