#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void print_vector(vector<int>& v) {
  for (int i = 0; i < (int)v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  vector<int> v1;
  vector<int> v2(6);
  vector<int> v3 = {10, 1, 2, 3, 4};

  print_vector(v1);
  print_vector(v2);
  print_vector(v3);

  v3.emplace_back(5);
  print_vector(v3);
  sort(v3.begin(), v3.end());
  print_vector(v3);

  for (int i = 0; i < 100; i++) {
    cout << "\a";
  }

  vector<string> words;
  for (string tmp; cin >> tmp;) {
    if (tmp == "z") {
      break;
    }
    words.push_back(tmp);
  }
  sort(words.begin(), words.end());
  for(int i=0; i < words.size(); ++i) {
    if (i == 0 || words[i] != words[i - 1]) {
        cout << words[i] << " \a";
    }
    // cout << "\n";
  }

  return 0;
}