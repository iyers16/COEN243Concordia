#include <iostream>
#include <iomanip>
using namespace std;

void functionOne(int lb, int ub);
void functionTwo(int lb, int ub);
void functionThree(double lb, double ub);

int main() 
{
  int lowerBound, upperBound;
  char input;
  //double qwerty;
  cout << "Please enter two positive integer numbers: (Lower bound/Upper bound): ";
  cin >> lowerBound >> upperBound;
  //qwerty = (double)lowerBound/(double)upperBound;
  //cout << qwerty;

  cout << "\nPlease enter a character: ";
  cin >> input;

  if(input == 'a')
  {
    functionOne(lowerBound, upperBound);
    return EXIT_SUCCESS;
  }
  else if(input == 'b')
  {
    functionTwo(lowerBound, upperBound);
    return EXIT_SUCCESS;
  }
  else if(input == 'c')
  {
    functionThree(double(lowerBound),double(upperBound));
    return EXIT_SUCCESS;
  }
  else
  {
    cout << "Invalid Input\nProgram terminated\n";
    return EXIT_FAILURE;
  }

}


void functionOne(int lb, int ub)
{
  for(int i = lb; i <= ub; i++)
  {
    if(i % 7 ==0 && i % 2 ==0)
    {
      cout<< i<<" ";
    }
  }
  cout <<endl;
}

void functionTwo(int lb, int ub)
{
  int result = ub - lb;
  cout << "The difference is: " << result <<endl;
}

void functionThree(double lb, double ub)
{
  double sum = 0;
  for(double i = lb; i <= ub; i++)
  {
    sum += (1 / i);
  }

  cout << "The sum is: "<< setprecision(3) << sum <<endl;
}