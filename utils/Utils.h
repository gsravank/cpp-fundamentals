#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

vector<string> read_lines(string filename);

void write_lines(vector<string> lines, string filename);

void print(string message, string end="\n");