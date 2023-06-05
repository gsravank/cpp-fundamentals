#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <memory>

using namespace std;


int main() {
  unique_ptr<int> ptr( new int );
  *ptr = 99;
  cout << ptr << " " << *ptr << endl;
  // no need to delete ptr

  const int SIZE = 10;
  unique_ptr<int[]> ptr1(new int[SIZE] );
  cout << ptr1 << endl;
  // no pointer arithmetic on ptr1

  return 0;
}