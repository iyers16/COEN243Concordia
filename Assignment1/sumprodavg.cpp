//GOAL: Read three inputs from user xyz and return sum, product and average

#include <iostream>
using namespace std;

//Processing functions defined here and elaborated after main loop
float sum(float a, float b, float c);
float product(float d, float e, float f);
float average(float g, float h, float i);


int main() 
{
  //Define input variables

  float x, y, z;

  /*
  IF NOT USING FUNCTIONS DECLARE OUTPUT VARIABLES:
  float add, product, average;
  */

  //Take all inputs from user

  cout << "Input first number: ";
  cin >> x;
  cout << "Input second number: ";
  cin >> y;
  cout << "Input third number: ";
  cin >> z;
  cout << "\n\n";
  /*
  ALTERNATIVE:
  cout << "Input numbers x, y, and z sequentially: ";
  cin >> x >> y >> z;
  */


  /*
  IF NOT USING FUNCTIONS:
  add = x + y + z;
  product = x * y * z;
  average = add/3;
  cout << "Sum result: " << add << endl;
  cout << "Product result: " << product << endl;
  cout << "Average result: " << average << endl;
  */

  //Processing inputs and outputing results
  cout << "The results are:" << "\n\n";
  cout << "Sum result: " << sum(x, y, z) << endl;
  cout << "Product result: " << product(x, y, z) << endl;
  cout << "Average result: " << average(x, y, z) << endl;

  return 0;
}

//Function for processing input and returning sum
float sum(float a, float b, float c) 
{
  float r = a + b + c;
  return r;
}

//Function for processing input and returning product
float product(float d, float e, float f){
  float s = d * e * f;
  return s;
}

//Function for processing input and returning average
float average(float g, float h, float i)
{
  float t = (sum(g, h, i)) / 3;
  return t;
}
