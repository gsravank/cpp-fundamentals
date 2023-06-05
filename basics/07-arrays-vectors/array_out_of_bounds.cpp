#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
  int size = 3;
  int values[size];
  int count;

  cout << "Storing 5 numbers in a 3-element array!\n";
  for (count = 0; count < 5; count++) {
    values[count] = count;
  }

  cout << "If you see this message, then program\n";
  cout << "hasn't crashed! Numbers are: \n";
  for (count = 0; count < 5; count++) {
    cout << values[count] << endl;
  }
  // Essentially we are writing in the next location to values[3]
  // Whatever was there before, will be erased when we access
  // location beyond the array!

  int* address = &values[0];
  cout << address << " " << address + 1 << endl;
  cout << *address << " " << *(address + 1) << endl;
  return 0;
}
