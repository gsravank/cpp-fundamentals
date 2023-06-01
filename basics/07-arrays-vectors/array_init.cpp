#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int global_arr[10];

int main() {
  int numbers[5] = {0, 1, 2, 3, 4};
  int part_numbers[10] = {4, 1, 2, 3}; // rest are initialised to 0

  for (int i = 0; i < 10; ++i) {
    cout << part_numbers[i] << " ";
  }
  cout << "\n";

  int no_size_numbers[] = {1,2,3,4,5}; // implicit array sizing
  cout << "Size of no_size array: " 
       << sizeof(no_size_numbers) / sizeof(*no_size_numbers) 
       << "\n";

  return 0;

  int n;
  while (true) {
    cout << "Enter number > 0 and <= 10: ";
    cin >> n;
    if (n <= 0 || n > 10) {
      cout << "Number should be between 0 and 10" << endl;
    } else {
      break;
    }
  }

  int local_arr[n]; 
  // Generally not allowed in c++
  // Size of array should be known at compile time

  for (int i = 0; i < n; ++i) {
    cout << "global[" << i << "] = " << global_arr[i] << "\n";
    // this should print 0s
  }
  cout << "\n";

  for (int i = 0; i < n; ++i) {
    cout << "local[" << i << "] = " << local_arr[i] << "\n";
    // this will print random ints
  }
  cout << "\n";

  return 0;
}