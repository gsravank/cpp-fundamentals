#include "Utils.h"

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

void print(string message, string end) {
  cout << message << end;
}