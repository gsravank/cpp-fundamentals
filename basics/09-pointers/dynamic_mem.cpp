#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

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
  int* ptr = new int;
  *ptr = 10;
  cout << ptr << " " << *ptr << endl;
  
  int num = 5;
  int* ptr1 = &num; 
  cout << ptr1 << " " << *ptr1 << endl;


  const int SIZE = 10;
  int* ptr2 = new int[SIZE];
  for (int i = 0; i < SIZE; ++i) {
    ptr2[i] = i;
  }
  cout << ptr2 << endl;
  printArr(ptr2, SIZE);
  
  cout << ptr2 - ptr << endl;
  
  delete ptr;
  delete [] ptr2;

  cout << ptr << " " << *ptr << endl;

  ptr = nullptr;
  ptr2 = nullptr; // good practice after deleting memory of pointer

  return 0;
}