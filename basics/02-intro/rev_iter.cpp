#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<map>
#include<set>

using namespace std;

int main() {
  map<int, int> price_to_index;
  for (int i=0; i < 100; ++i) {
    int price = 27500 + (i * 100);
    price_to_index.emplace(price, i);
  }

  int ltp;
  while (true) {
    std::cout << "Enter price: ";
    cin >> ltp;

    auto prevIter = price_to_index.rend();
    auto iter = price_to_index.begin();
    for (; iter != price_to_index.end(); iter++) {
        prevIter = make_reverse_iterator(iter);
        if (ltp <= iter->first) {
        std::cout << "Found first price greater than ltp. LTP = " << ltp << ", Price = " << iter->first << "\n";
        if (ltp - prevIter->first > iter->first - ltp) {
            prevIter++;
            iter++;
            iter++;
        } else {
            prevIter++;
            prevIter++;
            iter++;
        }
        break;
        }
    }
    std::cout << "After search, prevIter = " << prevIter->first << ", iter = " << iter->first << "\n";

    set<int> strikes;
    auto lcount = 2;
    std::cout << "PrevIter\n";
    while (lcount > 0 && prevIter != price_to_index.rend()) {
        strikes.emplace(prevIter->first);
        std::cout << "Adding strike " << prevIter->first << "\n";
        prevIter++;
        lcount--;
    }
    auto rcount = 2 + lcount;
    std::cout << "Iter\n";
    while (rcount > 0 && iter != price_to_index.end()) {
        strikes.emplace(iter->first);
        std::cout << "Adding strike " << iter->first << "\n";
        iter++;
        rcount--;
    }
  }

  return 0;
}
