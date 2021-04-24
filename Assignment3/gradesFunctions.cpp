//Declaring all libraries used
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Declaring macros for grade ranges
#define A_RANGE 80
#define B_RANGE 70
#define C_RANGE 55
#define D_RANGE 40

//Declaring funtions used in main function
void maxGrade(int arr[], int size);
void minGrade(int arr[], int size);
void avgGrade(int arr[], int size);
void medGrade(int arr[], int size);
void aGrade(int arr[], int size);
void bGrade(int arr[], int size);
void cGrade(int arr[], int size);
void dGrade(int arr[], int size);
void fGrade(int arr[], int size);




int main()
{
  //Declare number of user inputs as an integer
  int numOfInputs;

  //Recieve number of inputs and store inside previous variable
  cout << "Number of grades: ";
  cin >> numOfInputs;

  //Declare array to store all inputs which size is determined with the previous variable
  int gradesArray[numOfInputs];

  //Iteration to find and store all values of the user into the array
  for (int i = 0; i < numOfInputs; i++)
  {
    cin >> gradesArray[i];
  }

  //Pass array of grades by value and size of array into the following functions: (explained below)
  maxGrade(gradesArray, numOfInputs);
  minGrade(gradesArray, numOfInputs);
  avgGrade(gradesArray, numOfInputs);
  medGrade(gradesArray, numOfInputs);
  aGrade(gradesArray, numOfInputs);
  bGrade(gradesArray, numOfInputs);
  cGrade(gradesArray, numOfInputs);
  dGrade(gradesArray, numOfInputs);
  fGrade(gradesArray, numOfInputs);

  //program exit
  return EXIT_SUCCESS;
}


//Function determining the maximum value in the array
void maxGrade(int arr[], int size)
{
  //process + output
  cout << "The Maximum Grade is: " << *max_element(arr, arr + size) <<endl;
}

//Function determining the minimum value in the array
void minGrade(int arr[], int size)
{
  //process + output
  cout << "The Minimum Grade is: " << *min_element(arr, arr + size) <<endl;
}

//Function determining the average value in the array
void avgGrade(int arr[], int size)
{
  //initialization of summation
  int sum = 0;

  //iteration for the sum of the entire array
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  //storing the final calculation of average as a float
  float average = float(sum) / size;

  //output
  cout << "The Average Grade is: " << average <<endl;
}

//Function determining the median value in the array
void medGrade(int arr[], int size)
{
  //sort array in ascending order of value
  sort(arr, arr + size);

  //ternary operation to find median value and store as float into the variable "median"
  float median = (size % 2 != 0) ? (float)arr[size / 2] : (float)(arr[(size - 1) / 2] + arr[size / 2]) / 2.0;

  //output
  cout << "The Median Grade is: " << median <<endl;
}


void aGrade(int arr[], int size)
{
  //initialization of counter variable
  int counter = 0;

  //iteration to find values in-range and keeping count
  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= A_RANGE)
    {
      counter++;
    }
  }

  //output
  cout << "Number of A Grades: " << counter <<endl;
}


void bGrade(int arr[], int size)
{
  //initialization of counter variable
  int counter = 0;

  //iteration to find values in-range and keeping count
  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= B_RANGE && arr[i] < A_RANGE)
    {
      counter++;
    }
  }

  //output
  cout << "Number of B Grades: " << counter <<endl;
}


void cGrade(int arr[], int size)
{
  //initialization of counter variable
  int counter = 0;

  //iteration to find values in-range and keeping count
  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= C_RANGE && arr[i] < B_RANGE)
    {
      counter++;
    }
  }

  //output
  cout << "Number of C Grades: " << counter <<endl;
}


void dGrade(int arr[], int size)
{
  //initialization of counter variable
  int counter = 0;

  //iteration to find values in-range and keeping count
  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= D_RANGE && arr[i] < C_RANGE)
    {
      counter++;
    }
  }

  //output
  cout << "Number of D Grades: " << counter <<endl;
}


void fGrade(int arr[], int size)
{
  //initialization of counter variable
  int counter = 0;

  //iteration to find values in-range and keeping count
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < D_RANGE)
    {
      counter++;
    }
  }

  //output
  cout << "Number of F Grades: " << counter <<endl;
}
