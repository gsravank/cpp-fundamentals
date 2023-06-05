#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

void doubleVal(int* num) {
  *num *= 2;
}

void doubleArr(int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    *(arr + i) *= 2;
    // arr[i] can be used too
  }
}

void printArr(const int* arr, int size) {
  // arr is pointer to const int
  // even though arr may original not be const
  // this just makes sure we don't change
  // arr in this func
  for (int i = 0; i < size; ++i) {
    cout << *(arr + i) << " ";
    // arr[i] can be used too
  }
  cout << endl;
}

int main() {
  int num = 10;
  cout << "Num = " << num << endl;
  doubleVal(&num);
  cout << "Double = " << num << endl;  

  const int SIZE = 5;
  int numbers[SIZE] = {1, 2, 3, 4, 5};

  cout << "Before doubling: ";
  printArr(numbers, SIZE);
  doubleArr(numbers, SIZE);
  cout << "After doubling: ";
  printArr(numbers, SIZE);

  return 0;
}