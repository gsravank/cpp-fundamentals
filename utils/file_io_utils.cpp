#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

vector<string> read_lines(string filename) {
  ifstream inputStream;
  vector<string> lines;
  inputStream.open(filename);
  if (inputStream) {
    string line;
    while (inputStream >> line) {
      lines.push_back(line);
    }
  } else {
    cout << "Could not open file. Returning empty list\n";
  }
  inputStream.close();
  return lines;
}

void write_lines(vector<string> lines, string filename) {
  ofstream outputStream;
  outputStream.open(filename);
  if (outputStream) {
    for (auto line : lines) {
      outputStream << line << endl;
    }
  } else {
    cout << "Could not open file to dump lines\n";
  }
  outputStream.close();
}

void print(string message, string end="\n") {
  cout << message << end;
}

int main() {
  print("Hello", " ");
  print("World!");
  print("Hi");
  return 0;
  vector<string> lines;
  for (int i = 0; i < 10; ++i) {
    lines.push_back(to_string(i));
  }
  string fn = "/Users/sravan/Projects/cpp-fundamentals/data/numbers.new.txt";
  write_lines(lines, fn);

  vector<string> rlines = read_lines(fn);
  for (auto line : rlines) {
    cout << "'" << line << "'" << endl;
  }

  return 0;
}