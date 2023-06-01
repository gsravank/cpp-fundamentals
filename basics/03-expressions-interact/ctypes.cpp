#include <iostream>

using namespace std;

int main() {
  char initial = 'g';
  cout << initial << "\n";
  initial = 0;
  cout << initial << "\n";

  cout << sizeof(initial) << "\n";

  // for (int i = 65; i < 127; ++i) {
  //   initial = i;
  //   cout << i << " " << initial << "\n";
  // }

  return 0;

}