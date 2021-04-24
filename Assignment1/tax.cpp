//GOAL: Return to user his income tax and net income for an input of gross revenue
#include <iostream>
using namespace std;

int main() {
  //Declare input variable
  float grossRevenue;
  //Declare output variables
  float incomeTax, netIncome;
  //Declare problem set variables
  float tax1 = 0.15;
  float tax2 = 0.205;
  float tax3 = 0.26;
  float tax4 = 0.29;
  float tax5 = 0.33;

  float range1 = 48535;
  float range2 = 97069;
  float range3 = 150473;
  float range4 = 214368;

  float addingRevenue;

  //Get user input
  cout << "Enter gross revenue: ";
  cin >> grossRevenue;
  cout <<endl;
  
  //if revenue is below specified range, add summation of taxes preceding that range and add it to the subtraction of the revenue and the floor value of the present range
  if (grossRevenue <= range1)
  {
    incomeTax = (grossRevenue * tax1);
  }else if (grossRevenue > range1 && grossRevenue <= range2)
  {
    addingRevenue = range1 * tax1;
    incomeTax = ((grossRevenue - range1) * tax2) + addingRevenue;
  }else if (grossRevenue > range2 && grossRevenue <= range3)
  {
    addingRevenue = ((range2 - range1) * tax2) + (range1 * tax1);
    incomeTax = ((grossRevenue - range2) * tax3) + addingRevenue;
  }else if (grossRevenue > range3 && grossRevenue <= range4)
  {
    addingRevenue = ((range3 - range2) * tax3) + ((range2 - range1) * tax2) + (range1 * tax1);
    incomeTax = ((grossRevenue - range3) * tax4) + addingRevenue;
  } else
  {
    addingRevenue = ((range4 - range3) * tax4) + ((range3 - range2) * tax3) + ((range2 - range1) * tax2) + (range1 * tax1);
    incomeTax = ((grossRevenue - range4) * tax5) + addingRevenue;
  }

  //return income tax value to user
  cout << incomeTax <<endl;

  //calculate and return net income to user
  netIncome = grossRevenue - incomeTax;
  cout << netIncome <<endl;


  return 0;
}