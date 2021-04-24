#include "student.h"
#include "faculty.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

Faculty::Faculty()
{

  ifstream file; //initialized a reading file
  //Declared all variables of the scope
  this->m_ElCoStudents = nullptr;
  string line, fname, lname, id, dob, gpa, syr, cred, prog;
  int num = 0;
  file.open("student_elec_comp.txt");
  if(!file)
  {
    cout << "Error opening file! Terminating processes now, exit code 1" <<endl;
    exit(1);
  }
  if(file.is_open())
  {
    int i = 0;
    while(getline(file, line))
    {
      if (num == 0)
      {
        num = stoi(line);
        this->m_numElCoStudents = num;
        this->m_ElCoStudents = new Student[num];
      }
      else
      {
        istringstream iss(line);
        getline(iss, fname, ' ');
        getline(iss, lname, ' ');
        getline(iss, id, ' ');
        getline(iss, dob, ' ');
        getline(iss, gpa, ' ');
        getline(iss, syr, ' ');
        getline(iss, cred, ' ');
        getline(iss, prog, ' ');
        this->m_ElCoStudents[i] = Student(fname, lname, id, dob, gpa, syr, cred, prog);
        ++i;
      }
    }
  }
  file.close();


  this->m_MechStudents = nullptr;
  num = 0;
  file.open("student_mech.txt");
  if(!file)
  {
    cout << "Error opening file! Terminating processes now, exit code 1" <<endl;
    exit(1);
  }
  if(file.is_open())
  {
    int i = 0;
    while(getline(file, line))
    {
      if (num == 0)
      {
        num = stoi(line);
        this->m_numMechStudents = num;
        this->m_MechStudents = new Student[num];
      }
      else
      {
        istringstream iss(line);
        getline(iss, fname, ' ');
        getline(iss, lname, ' ');
        getline(iss, id, ' ');
        getline(iss, dob, ' ');
        getline(iss, gpa, ' ');
        getline(iss, syr, ' ');
        getline(iss, cred, ' ');
        getline(iss, prog, ' ');
        this->m_MechStudents[i] = Student(fname, lname, id, dob, gpa, syr, cred, prog);
        ++i;

      }
    }
  }
  file.close();


  this->m_CivStudents = nullptr;
  num = 0;
  file.open("student_civil.txt");
  if(!file)
  {
    cout << "Error opening file! Terminating processes now, exit code 1" <<endl;
    exit(1);
  }
  if(file.is_open())
  {
    int i = 0;
    while(getline(file, line))
    {
      if (num == 0)
      {
        num = stoi(line);
        this->m_numCivStudents = num;
        this->m_CivStudents = new Student[num];
      }
      else
      {
        istringstream iss(line);
        getline(iss, fname, ' ');
        getline(iss, lname, ' ');
        getline(iss, id, ' ');
        getline(iss, dob, ' ');
        getline(iss, gpa, ' ');
        getline(iss, syr, ' ');
        getline(iss, cred, ' ');
        getline(iss, prog, ' ');
        this->m_CivStudents[i] = Student(fname, lname, id, dob, gpa, syr, cred, prog);
        ++i;
      }
    }
  }
  file.close();
}

Faculty::~Faculty()
{
  delete[] m_ElCoStudents;
  delete[] m_MechStudents;
  delete[] m_CivStudents;
}

void Faculty::Highest_GPA(string dept)
{
  float high = 0.0;
  int index;
  if(dept == "ElCo")
  {
    for(int ctr = 0; ctr < this->m_numElCoStudents; ++ctr)
    {
      if(this->m_ElCoStudents[ctr].getGPA() > high)
      {
        high = this->m_ElCoStudents[ctr].getGPA();
        index = ctr;
      }
    }

    cout << "The highest GPA in Electrical and Computer Engineering is: " << high << "\nThis is their info: "<<endl;
    this->m_ElCoStudents[index].Print_Std_Info();
  }
  else if(dept == "Mech")
  {
    for(int ctr = 0; ctr < this->m_numMechStudents; ++ctr)
    {
      if(this->m_MechStudents[ctr].getGPA() > high)
      {
        high = this->m_MechStudents[ctr].getGPA();
        index = ctr;
      }
    }
    cout << "The highest GPA in Mechanical Engineering is: " << high << "\nThis is their info: "<<endl;
    this->m_MechStudents[index].Print_Std_Info();
  }
  else if(dept == "Civil")
  {
    for(int ctr = 0; ctr < this->m_numCivStudents; ++ctr)
    {
      if(this->m_CivStudents[ctr].getGPA() > high)
      {
        high = this->m_CivStudents[ctr].getGPA();
        index = ctr;
      }
    }
    cout << "The highest GPA in Civil Engineering is: " << high << "\nThis is their info: "<<endl;
    this->m_CivStudents[index].Print_Std_Info();
  }
}

const int Faculty::N_of_Undergrad(string dept)
{
  int ugrad = 0;
  if(dept == "ElCo")
  {
    for(int ctr = 0; ctr < m_numElCoStudents; ++ctr)
    {
      if(m_ElCoStudents[ctr].getProgram() == "B") ++ugrad;
    }
  }
  else if(dept == "Mech")
  {
    for(int ctr = 0; ctr < m_numMechStudents; ++ctr)
    {
      if(m_MechStudents[ctr].getProgram() == "B") ++ugrad;
    }
  }
  else if(dept == "Civil")
  {
    for(int ctr = 0; ctr < m_numCivStudents; ++ctr)
    {
      if(m_CivStudents[ctr].getProgram() == "B") ++ugrad;
    }
  }
  return ugrad;
}


const int Faculty::N_of_Grad(string dept)
{
  int grad = 0;
  if(dept == "ElCo")
  {
    for(int ctr = 0; ctr < m_numElCoStudents; ++ctr)
    {
      if(m_ElCoStudents[ctr].getProgram() != "B") ++grad;
    }
  }
  else if(dept == "Mech")
  {
    for(int ctr = 0; ctr < m_numMechStudents; ++ctr)
    {
      if(m_MechStudents[ctr].getProgram() != "B") ++grad;
    }
  }
  else if(dept == "Civil")
  {
    for(int ctr = 0; ctr < m_numCivStudents; ++ctr)
    {
      if(m_CivStudents[ctr].getProgram() != "B") ++grad;
    }
  }
  return grad;
}

const float Faculty::Avg_Undergrad(string dept)
{
  float avg = 0.0;
  float ret = 0.0;
  if(dept == "ElCo")
  {
    for(int ctr = 0; ctr < m_numElCoStudents; ++ctr)
    {
      if(m_ElCoStudents[ctr].getProgram() == "B") avg += m_ElCoStudents[ctr].getGPA();
    }
    string elco = "ElCo";
    int num = Faculty::N_of_Undergrad(elco);
    if(num == 1) return avg;
    ret = avg / num;
  }
  else if(dept == "Mech")
  {
    for(int ctr = 0; ctr < m_numMechStudents; ++ctr)
    {
      if(m_MechStudents[ctr].getProgram() == "B") avg += m_MechStudents[ctr].getGPA();
    }
    string mech = "Mech";
    int num = Faculty::N_of_Undergrad(mech);
    if(num == 1) return avg;
    ret = avg / num;
  }
  else if(dept == "Civil")
  {
    for(int ctr = 0; ctr < m_numCivStudents; ++ctr)
    {
      if(m_CivStudents[ctr].getProgram() == "B") avg += m_CivStudents[ctr].getGPA();
    }
    string civil = "Civil";
    int num = Faculty::N_of_Undergrad(civil);
    if(num == 1) return avg;
    ret = avg / num;
  }
  return ret;
}


const float Faculty::Avg_Grad(string dept)
{
  float avg = 0.0;
  float ret = 0.0;
  if(dept == "ElCo")
  {
    for(int ctr = 0; ctr < m_numElCoStudents; ++ctr)
    {
      if(m_ElCoStudents[ctr].getProgram() != "B") avg += m_ElCoStudents[ctr].getGPA();
    }
    string elco = "ElCo";
    int num = Faculty::N_of_Grad(elco);
    if(num == 1) return avg;
    ret = avg / num;
  }
  else if(dept == "Mech")
  {
    for(int ctr = 0; ctr < m_numMechStudents; ++ctr)
    {
      if(m_MechStudents[ctr].getProgram() != "B") avg += m_MechStudents[ctr].getGPA();
    }
    string mech = "Mech";
    int num = Faculty::N_of_Grad(mech);
    if(num == 1) return avg;
    ret = avg / num;
  }
  else if(dept == "Civil")
  {
    for(int ctr = 0; ctr < m_numCivStudents; ++ctr)
    {
      if(m_CivStudents[ctr].getProgram() != "B") avg += m_CivStudents[ctr].getGPA();
    }
    string civil = "Civil";
    int num = Faculty::N_of_Grad(civil);
    if(num == 1) return avg;
    ret = avg / num;
  }
  return ret;
}
