#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
void printType(T var) {
  cout << typeid(var).name() << " ";
}

int main() {
  auto num = 5;
  auto temperature = 10.0;
  auto initial = 'g';
  auto name = "Sravan";

  cout << typeid(num).name() << " "
       << typeid(temperature).name() << " "
       << typeid(initial).name() << " "
       << typeid(name).name() << "\n";
  
  printType(num);
  printType(temperature);
  printType(initial);
  printType(name);
  cout << "\n";
  return 0;
}