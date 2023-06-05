#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

void printVector(vector<int>& vec) {
  for (int i = 0; i < (int)vec.size(); ++i) {
    cout << vec[i] << " ";
  }
  cout << "\n";
}

int main() {
  vector<int> nums;
  vector<int> nums1(10);
  vector<int> nums2(10, 1);
  vector<int> nums3(nums2);
  vector<int> nums4 {1, 2, 3, 4};

  printVector(nums);
  printVector(nums1);
  printVector(nums2);
  printVector(nums3);
  
  cout << endl;
  printVector(nums4);
  cout << "Pushing number to end of vect\n";
  nums4.push_back(5);
  printVector(nums4);
  cout << "Popping number from end of vect\n";
  nums4.pop_back();
  printVector(nums4);
  cout << nums4.empty() << endl;
  cout << "Clearing vector\n";
  nums4.clear();
  cout << nums4.empty() << endl;

  // Resize
  cout << endl;
  cout << "Current vector: ";
  printVector(nums3);
  cout << "Resized to higher size: ";
  nums3.resize(20, 0);
  printVector(nums3);

  // Swap
  cout << "v1: ";
  printVector(nums3);
  cout << "v2: ";
  printVector(nums2);
  cout << &nums3 << " " << &nums2 << "\n";
  cout << "Swapping vectors. Now,\n";
  nums3.swap(nums2);
  cout << "v1: ";
  printVector(nums3);
  cout << "v2: ";
  printVector(nums2);
  cout << &nums3 << " " << &nums2 << "\n";

  return 0;
}