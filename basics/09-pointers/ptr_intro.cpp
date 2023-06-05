#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
  int num = 10;
  int* ptr = &num;
  int* ptr1 = nullptr;
  double numd = 10.0;

  cout << num << " " << ptr << " " << *ptr << " " << ptr1 << endl;
  cout << sizeof(num) << " " << sizeof(ptr) << endl;
  cout << sizeof(numd) << " " << sizeof(&numd) << endl;

  // array stuff
  cout << "Array stuff\n";
  const int SIZE = 5;
  int numbers[SIZE] = {1, 2, 3, 4 ,5};
  cout << numbers << endl;
  for (int i = 0; i < SIZE; ++i) {
    cout << *(numbers + i) << " ";
    // array[i] == *(array + i)
  }
  cout << endl;
  int* arrPtr = numbers;
  for (int i = 0; i < SIZE; i++) {
    cout << arrPtr[i] << " ";
  }
  cout << endl;

  // Ptr arithmetic
  cout << "Pointer arithmetic\n";
  cout << &numbers[1] - &numbers[0] << endl;
  cout << (&numbers[1] > &numbers[0]) << " "
       << (numbers == &numbers[0]) << " "
       << (&numbers[2] != &numbers[3]) << " "
       << endl;

  return 0;
}