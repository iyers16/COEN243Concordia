#ifndef FACULTY_H
#define FACULTY_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Faculty
{

private:
  Student* m_ElCoStudents;
  Student* m_MechStudents;
  Student* m_CivStudents;
  int m_numMechStudents;
  int m_numElCoStudents;
  int m_numCivStudents;

public:
  Faculty();
  ~Faculty();


  void Highest_GPA(string dept);
  const int N_of_Undergrad(string dept);
  const int N_of_Grad(string dept);
  const float Avg_Undergrad(string dept);
  const float Avg_Grad(string dept);
};

#endif
