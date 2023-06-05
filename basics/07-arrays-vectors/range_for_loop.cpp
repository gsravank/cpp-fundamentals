#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
  int numbers[] = {0, 1, 2, 3, 4, 5, 6};
  int count = 0;

  for (int num : numbers) { // int or auto can be use for the type
    count++;
    cout << num << " ";
  }
  cout << "\n";
  cout << "Size of array: " << count << endl;

  count = 0;
  for (auto& num : numbers) { // int& or auto& are both fine
    num++;
    cout << numbers[count] << " ";
    count++;
  }
  cout << "\n";
  return 0;
}