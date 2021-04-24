#include "student.h"
#include <iostream>
#include <string>
using namespace std;



Student::Student(const Student& source)
{
  this->m_firstName = source.m_firstName;
  this->m_lastName = source.m_lastName;
  this->m_id = source.m_id;
  this->m_dateBirth = source.m_dateBirth;
  this->m_gpa = source.m_gpa;
  this->m_startYear = source.m_startYear;
  this->m_completedCredit = source.m_completedCredit;
  this->m_program = source.m_program;
}

Student& Student::operator = (const Student& source)
{
  this->m_firstName = source.m_firstName;
  this->m_lastName = source.m_lastName;
  this->m_id = source.m_id;
  this->m_dateBirth = source.m_dateBirth;
  this->m_gpa = source.m_gpa;
  this->m_startYear = source.m_startYear;
  this->m_completedCredit = source.m_completedCredit;
  this->m_program = source.m_program;
  return *this;
}

Student::Student(string& firstName,
                 string& lastName,
                 string& id,
                 string& dateBirth,
                 string& gpa,
                 string& startYear,
                 string& completedCredit,
                 string& program)
{
  setFirstName(firstName);
  setLastName(lastName);
  setID(id);
  setBirth(dateBirth);
  setGPA(gpa);
  setStartYear(startYear);
  setCompletedCredit(completedCredit);
  setProgram(program);
}



// get funcs
const string& Student::getFirstName() const
{
  return this->m_firstName;
}
void Student::setFirstName(string& fname)
{
  this->m_firstName = fname;
}

const string& Student::getLastName() const
{
  return this->m_lastName;
}
void Student::setLastName(string& lname)
{
  this->m_lastName = lname;
}

const string& Student::getID() const
{
    return this->m_id;
}
void Student::setID(string& id)
{
  this->m_id = id;
}

const string& Student::getBirth() const
{
    return this->m_dateBirth;
}
void Student::setBirth(string& birth)
{
  this->m_dateBirth = birth;
}

const float& Student::getGPA() const
{
  return this->m_gpa;
}
void Student::setGPA(string& gpa)
{
  this->m_gpa = stof(gpa);
}

const int& Student::getStartYear() const
{
  return this->m_startYear;
}
void Student::setStartYear(string& syr)
{
  this->m_startYear = stoi(syr);
}

const int& Student::getCompletedCredit() const
{
  return this->m_completedCredit;
}
void Student::setCompletedCredit(string& cred)
{
  this->m_completedCredit = stoi(cred);
}

const string& Student::getProgram() const
{
  return this->m_program;
}
void Student::setProgram(string& prog) 
{
  this->m_program = prog;
}



// function for completed credits. If program is finished or not
const bool Student::CompleteProgram() const
{
    // bachelor degree
  if(this->m_program == "B")
    // to complete program, must complete at least 140 credits
    return this->m_completedCredit >= 140;

    // masters degree
  else if(this->m_program == "M")
    // to complete program, must complete at least 16 credits
    return this->m_completedCredit >= 16;

    //PhD degree
  else if(this->m_program == "P")
    // to complete program, must complete at least 12 credits
    return this->m_completedCredit >= 12;

    // if another progrem is entered, user error
  else
    return false;
}


// function that translates gpa to letter grade
const string Student::StudentStatus() const
{
  if(this->m_gpa >= 3.5)
    return "A+";

  else if(this->m_gpa >= 3)
    return "A";

  else if(this->m_gpa >= 2.5)
    return "B";

  else if(this->m_gpa >= 2)
    return "C";

  else
    return "D";
}


// function that prints out all student attributes
void Student::Print_Std_Info()
{
  cout << "First name: " << this->m_firstName <<endl;
  cout << "Last name: " << this->m_lastName <<endl;
  cout << "Student ID: " << this->m_id <<endl;
  cout << "Date of Birth: " << this->m_dateBirth <<endl;
  cout << "GPA: " << this->m_gpa <<endl;
  cout << "Start year: " << this->m_startYear <<endl;
  cout << "Completed credit: " << this->m_completedCredit <<endl;
  cout << "Program: ";

  if(this->m_program == "B")
    cout<<"Bachelor" <<endl;

  else if(this->m_program == "M")
    cout<<"Master's" <<endl;

  else if(this->m_program == "P")
    cout<<"Ph.D" <<endl;

  else
    cout << this->m_program <<endl;
}


// function compares gpa of two students. Return id of the student with higher gpa
const string& Student::CompareGPA(const Student& source) const
{

  // student's gpa is higher or equal to student1's gpa, their id will be returned
  if(this->m_gpa >= source.getGPA())
    return this->m_id;

  // if not, return id of the student of student1
  else
    return source.getID();
}
