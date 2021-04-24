#include <iostream>
using namespace std;

int main() {
  int originalNum, decimalMod, reversedNum = 0;

  cout << "Enter an integer: ";
  cin >> originalNum;

  while (originalNum != 0)
  {
    decimalMod = originalNum % 10;
    reversedNum = reversedNum * 10 + decimalMod;
    originalNum /= 10;
  }

  cout << "Reversed integer: " << reversedNum <<endl;

  return 0;
}
