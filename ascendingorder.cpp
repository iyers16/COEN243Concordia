//GOAL: Sort user inputs into ascending order

#include <iostream>
using namespace std;
#define MAX 3

int main() {
  int i, j;
  //Declare input array and temporary variable
  int input[MAX], tempvar;


  //Get 3 integers of user input and store into array
  cout << "Enter 3 integers to sort: \n\n";
  for (i = 0; i < MAX; i++)
  {
    cout << "Enter any integer: ";
    cin >> input[i];
  }

  //Sort each inputted term of the array
  for (i = 0; i < MAX; i++)
  {
    for (j = 0; j < MAX; j++)
    {
      if (input[i] < input[j])
      {
        tempvar = input[i];
        input[i] = input[j];
        input[j] = tempvar;
      }
    }
  }

  //Output results
  cout << "\n\nThe sorted array in ascending order is: " << endl;
  for (i = 0; i < MAX-1; i++)
  {
    cout << input[i] << ", ";
  }
  cout << input[MAX-1];
  cout << endl;


  return 0;
}