//GOAL: Convert a number grade into a letter grade
#include <iostream>
using namespace std;

int main() {
  //Declare input variable
  float grade;
  //Take user input
  cout << "Enter your grade: ";
  cin >> grade;
  cout <<endl;
  
  if (grade >= 90){
    cout << "A+" <<endl;
  } else if (grade < 90 && grade >= 85){
    cout << "A" <<endl;
  } else if (grade < 85 && grade >= 80){
    cout << "A-" <<endl;
  } else if (grade < 80 && grade >= 75){
    cout << "B+" <<endl;
  } else if (grade < 75 && grade >= 70){
    cout << "B" <<endl;
  } else if (grade < 70 && grade >= 65){
    cout << "C+" <<endl;
  } else if (grade < 65 && grade >= 60){
    cout << "C" <<endl;
  } else if (grade < 60 && grade >= 55){
    cout << "C-" <<endl;
  } else if (grade < 55 && grade >= 50){
    cout << "D+" <<endl;
  } else if (grade < 50 && grade >= 45){
    cout << "D" <<endl;
  } else if (grade < 45 && grade >= 40){
    cout << "D-" <<endl;
  } else {
    cout << "F" <<endl;
  }

  return 0;
}