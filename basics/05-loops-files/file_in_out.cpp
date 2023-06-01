#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
  // Read from file
  ifstream inputStream;
  vector<string> names;
  inputStream.open("/Users/sravan/Projects/cpp-fundamentals/data/names.txt");
  if (inputStream) {
    cout << "Opened file successfully.\n";
    string name;
    while (inputStream >> name) {
      cout << name << endl;
      names.push_back(name);
    }
    cout << "Done printing contents of file.\n";
  } else {
    cout << "Issue opening file!\n";
  }
  inputStream.close();

  // Write to file
  ofstream outputStream;
  outputStream.open("/Users/sravan/Projects/cpp-fundamentals/data/names.copy.txt");
  if (outputStream) {
    for (auto line : names) {
      outputStream << line << endl;
    }
    cout << "Done writing names to new file\n";
  } else {
    cout << "Issue opening file to dump names\n";
  }
  outputStream.close();
  return 0;
}