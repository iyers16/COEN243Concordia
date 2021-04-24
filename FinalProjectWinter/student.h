#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{

private:
// students' attribs
    string m_firstName;
    string m_lastName;
    string m_id;
    string m_dateBirth;
    float m_gpa;
    int m_startYear;
    int m_completedCredit;
    string m_program;

public:
  Student() = default; //Default Constructor (unused)
  ~Student() = default; //Destructor (set to compiler default)
  Student(const Student& source); //Copy constructor
  Student& operator = (const Student& source); //Copy Assignment Operator
  Student(string&, string&, string&, string&, string&, string&, string&, string&); //Constructor to populate object

  //Get functions: constant methods returning constants
  //Set funcs: const methods passing values to attributes
  const string& getFirstName() const;
  void setFirstName(string&);
  const string& getLastName() const;
  void setLastName(string&);
  const string& getID() const;
  void setID(string&);
  const string& getBirth() const;
  void setBirth(string&);
  const float& getGPA() const;
  void setGPA(string&);
  const int& getStartYear() const;
  void setStartYear(string&);
  const int& getCompletedCredit() const;
  void setCompletedCredit(string&);
  const string& getProgram() const;
  void setProgram(string&);

  //Additional member functions
  const bool CompleteProgram() const;
  const string StudentStatus()const;
  void Print_Std_Info();
  //Compare function
  const string& CompareGPA(const Student& source) const;
};
#endif
