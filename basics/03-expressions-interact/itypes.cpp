#include <iostream>

using namespace std;

int main() { 
  short int smallLoan = -100; 
  unsigned short int lifeInMonths = 100;

  int displacementBetweenCities = -1000;
  unsigned int distanceBetweenCities = 1000;

  long int debtAmount = -1000000000;
  unsigned long int numInsects = 100000000000;

  long long int displacementToGalaxy = -1000000000000000;
  unsigned long long int distanceToGalaxy = 10000000000000000;

  cout << smallLoan << " " << lifeInMonths << "\n"
       << displacementBetweenCities << " " << distanceBetweenCities << "\n"
       << debtAmount << " " << numInsects << "\n"
       << displacementToGalaxy << " " << distanceToGalaxy << "\n";

  cout << sizeof(smallLoan) << " " << sizeof(lifeInMonths) << "\n"
       << sizeof(displacementBetweenCities) << " " << sizeof(distanceBetweenCities) << "\n"
       << sizeof(debtAmount) << " " << sizeof(numInsects) << "\n"
       << sizeof(displacementToGalaxy) << " " << sizeof(distanceToGalaxy) << "\n";  
  return 0;
}