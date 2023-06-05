#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

int binarySearch(const int nums[], int size, int value) {
  int left = 0, right = size - 1, mid;
  while (left <= right) {
    mid = (left + right) / 2;
    if (nums[mid] == value) {
      return mid;
    } else if (nums[mid] > value) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return -1;
}

void printArray(const int nums[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << nums[i] << " ";
  }
  cout << "\n";
}

int main() {
  srand(time(NULL));
  const int SIZE = 20;
  int numbers[SIZE];
  int current = rand() % 10;
  for (int i = 0; i < SIZE; ++i) {
    numbers[i] = current;
    current += rand() % 10;
  }

  int input = 0;
  while (true) {
    cout << "Array: ";
    printArray(numbers, SIZE);
    cout << "Provide a positive number to check in the array: ";
    cin >> input;
    if (input <= 0) {
      break;
    } else {
      int pos = binarySearch(numbers, SIZE, input);
      if (pos < 0) {
        cout << input << " not present in the array\n";
      } else {
        cout << input << " present at " << pos << "-th index\n";
      }
    }
  }

  return 0;
}