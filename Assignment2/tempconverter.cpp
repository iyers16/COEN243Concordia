#include <iostream>
#include <iomanip>

using namespace std;

#define MAX_VALUE 50

int main() {
  float celsius, farhenheit, kelvin;
  int i;

  cout << "Celsius\t" << "Farhenheit\t" << "Kelvin" << endl;

  celsius = 1;
  for(i = 0; i < MAX_VALUE; i++)
  {
    farhenheit = ((celsius*9)/5) + 32;
    kelvin = celsius + 273.15;

    if(celsius < 10)
    {
      cout << fixed << setprecision(0) << celsius << "       ";
      cout << fixed << setprecision(1) << farhenheit << "        ";
      cout << fixed << setprecision(2) << kelvin << endl;
    }
    else if(celsius >= 10 && celsius < 38)
    {
      cout << fixed << setprecision(0) << celsius << "      ";
      cout << fixed << setprecision(1) << farhenheit << "        ";
      cout << fixed << setprecision(2) << kelvin << endl;
    }
    else
    {
      cout << fixed << setprecision(0) << celsius << "      ";
      cout << fixed << setprecision(1) << farhenheit << "       ";
      cout << fixed << setprecision(2) << kelvin << endl;
    }

    celsius++;
  }

  return 0;
}