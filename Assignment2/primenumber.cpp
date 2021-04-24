#include <iostream>
#include <cmath>
using namespace std;


int main() {
  //Declare user input variable and internal counter variable
  int userNumber, i;

  //Declare boolean variable to test condition of primality
  bool primality = true;

  //Recieve user input integer
  cout << "Enter a positive integer: ";
  cin >> userNumber;

  //Anything less than 1 is not prime (negatives aren't prime, 0 and 1 aren't prime)
  if(userNumber <= 1)
  {
    primality = false;
  }


  //Check for a modulo other than 0 from 2 to square root of the number to change primality to false
  for(i = 2; i <= sqrt(userNumber); i++)
  {
    if(userNumber % i == 0)
    {
      primality = false;
      break;
    }
  }

  //if boolean value of primality variable is true, it is prime; if it's false it is not prime
  if(primality)
  {
    cout << userNumber << " is a prime number." <<endl;
  }else
  {
    cout << userNumber << " is not a prime number." <<endl;
  }

  return EXIT_SUCCESS;
}