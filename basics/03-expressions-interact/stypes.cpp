#include <iostream>
#include <string>

using namespace std;

int main() {
  string name = "Sai Sravan Kumar";
  for (int i = 0; i < 10; ++i) {
    cin >> name;
    cout << name.size() << " " << name.capacity() << " " << name.max_size() << "\n";
  }
  cout << name.size() << " " << name.capacity() << endl;
  cout << sizeof(name) << " " << sizeof(string) << "\n";

  return 0;
}