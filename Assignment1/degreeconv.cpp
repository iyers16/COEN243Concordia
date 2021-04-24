//GOAL: Convert celsius to fahrenheit and kelvin

#include <iostream>
using namespace std;

//Declare conversion functions in use below main
float fahrenheit(float x);
float kelvin(float y);

int main() 
{

  //Declare input variable
  float cel;

  //Get user input (in celsius)
  cout << "Enter a temperature value in Celsius: ";
  cin >> cel;
  cout << "\n";

  //Output the processed results
  cout << "The results are: " << "\n\n";
  cout << "Celsius: " << cel << endl;
  cout << "Fahrenheit: " << fahrenheit(cel) << endl;
  cout << "Kelvin: " << kelvin(cel) << endl;
  
  return 0;
}

//Conversion to Fahrenheit: celsius x 9/5 + 32
float fahrenheit(float x)
{
  float f = ((x * 9) / 5) + 32;
  return f;
}

//Conversion to Kelvins: celsius + 273.15
float kelvin(float y)
{
  float k = y + 273.15;
  return k;
}