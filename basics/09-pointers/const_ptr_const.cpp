#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
  const int a = 10;
  int b = 20;
  int c = 30;

  const int* ptr1 = &a;
  cout << *ptr1 << endl;
  ptr1 = &b;
  cout << *ptr1 << endl;
  // *ptr1 += 1 can't be done because ptr1 points to const int

  int* const ptr2 = &b;
  // ptr2 = &c; // can't be done because ptr2 points to the same object
  *ptr2 += 1;
  cout << *ptr2 << endl;

  const int* const ptr3 = &b;
  cout << *ptr3 << endl;
  // *ptr3 += 1 can't be done because ptr3 points to const int
  // ptr3 = &c; // can't be done because ptr3 points to the same object
  
  return 0;
}