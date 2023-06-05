#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

void printArray(const int arr[], int size, string sep="\n") {
  for (int i = 0; i < size; ++i) {
    cout << arr[i];
    if (i != size - 1) {
      cout << sep;
    }
  }
  cout << endl;
}

void doubleArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    arr[i] *= 2;
  }
}

int main() {
  const int SIZE = 11;
  int numbers[SIZE];
  for (int i = 0; i < SIZE; ++i) {
    numbers[i] = (5-i)*(5-i);
  }

  printArray(numbers, SIZE, "\t");
  doubleArray(numbers, SIZE);
  printArray(numbers, SIZE, "\t");

  return 0;
}