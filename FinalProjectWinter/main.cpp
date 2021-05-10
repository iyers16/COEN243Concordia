#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include "student.h"
#include "faculty.h"
using namespace std;

int main(int argc, char ** argv)
{
  //Create Faculty Object
  Faculty Engineering;
  cout << "Created Faculty object: Engineering!" <<endl;
  cout <<endl;
  string elco = "ElCo";
  string mech = "Mech";
  string civil = "Civil";

  //Test member functions 1
  cout << "Testing highest GPA in each faculty..." <<endl;
  cout <<endl;
  Engineering.Highest_GPA(elco);
  cout <<endl;
  Engineering.Highest_GPA(mech);
  cout <<endl;
  Engineering.Highest_GPA(civil);
  cout <<endl;

  //Test member functions 2
  cout <<endl;
  cout << "Counting number of Undergrads in Engineering..." <<endl;
  cout <<endl;
  cout << "There are " << Engineering.N_of_Undergrad(elco) << " Undergrads in Electrical and Computer Engineering." <<endl;
  cout << "There are " << Engineering.N_of_Undergrad(mech) << " Undergrads in Mechanical Engineering." <<endl;
  cout << "There are " << Engineering.N_of_Undergrad(civil) << " Undergrads in Civil Engineering." <<endl;
  cout << "There are " << Engineering.N_of_Undergrad(elco) + Engineering.N_of_Undergrad(mech) + Engineering.N_of_Undergrad(civil) << " Undergrads in total in Engineering." <<endl;
  cout <<endl;
  //Test member functions 3
  cout <<endl;
  cout << "Counting number of Grads in Engineering..." <<endl;
  cout <<endl;
  cout << "There are " << Engineering.N_of_Grad(elco) << " Grads in Electrical and Computer Engineering." <<endl;
  cout << "There are " << Engineering.N_of_Grad(mech) << " Grads in Mechanical Engineering." <<endl;
  cout << "There are " << Engineering.N_of_Grad(civil) << " Grads in Civil Engineering." <<endl;
  cout << "There are " << Engineering.N_of_Grad(elco) + Engineering.N_of_Grad(mech) + Engineering.N_of_Grad(civil) << " Grads in total in Engineering." <<endl;
  cout <<endl;
  //Test member functions 4
  cout <<endl;
  cout << "Computing average GPA of Undergrads in each Department..." <<endl;
  cout <<endl;
  cout << "The GPA average of Electrical and Computer Engineering Undergrads is: " << Engineering.Avg_Undergrad(elco) <<endl;
  cout << "The GPA average of Mechanical Engineering Undergrads is: " << Engineering.Avg_Undergrad(mech) <<endl;
  cout << "The GPA average of Civil Engineering Undergrads is: " << Engineering.Avg_Undergrad(civil) <<endl;
  cout <<endl;
  //Test member functions 5
  cout <<endl;
  cout << "Computing average GPA of Grads in each Department..." <<endl;
  cout <<endl;
  cout << "The GPA average of Electrical and Computer Engineering Grads is: " << Engineering.Avg_Grad(elco) <<endl;
  cout << "The GPA average of Mechanical Engineering Grads is: " << Engineering.Avg_Grad(mech) <<endl;
  cout << "The GPA average of Civil Engineering Grads is: " << Engineering.Avg_Grad(civil) <<endl;
  cout <<endl;
  cout <<endl;

  //Read, Parse and populate all available student objects
  ifstream file;
  file.open("students.txt");
  cout << "Opening file: students.txt..." <<endl;
  if(!file)
  {
    cout << "Error opening file! Terminating processes now, Exit code 1" <<endl;
    exit(1);
  }
  string line, fname, lname, id, dob, gpa, syr, cred, prog;
  int num = 0;
  Student* arrStudents = nullptr;
  if(file.is_open())
  {
    cout << "Successfully opened students.txt!" <<endl;
    cout << "Populating Students..."<<endl;
    cout <<endl;
    int i = 0;
    while(getline(file, line) && !line.empty())
    {
      if (num == 0)
      {
        num = stoi(line);
        arrStudents = new Student[num];
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
        arrStudents[i] = Student(fname, lname, id, dob, gpa, syr, cred, prog);
        cout << "Successfully populated Student " << i+1 << " out of " << num <<endl;
        ++i;
      }
    }
  }
  cout << "Successfully populated all Students!" <<endl;
  cout <<endl;
  cout <<endl;

  string userid;
  cout << "Please input the ID of a student whom you want to see their entire info: ";
  cin >> userid;
  cout <<endl;
  int index = -1;
  for(int i = 0; i < num; ++i)
  {
    if(arrStudents[i].getID() == userid) index = i;
  }
  if(index == -1)
  {
    cout << "Wrong ID entered, exiting program now, exit code 1" <<endl;
    exit(1);
  }

  arrStudents[index].Print_Std_Info();
  if(arrStudents[index].CompleteProgram())
  {
    cout << "Their program has been completed!" <<endl;
  }
  else
  {
    cout << "Their program has not been completed yet!" <<endl;
  }

  cout << "Grade: " << arrStudents[index].StudentStatus() <<endl;
  cout <<endl;
  string compid, idcomp;
  cout << "Please enter the ID of 2 students who's GPAs you wish to compare (each on a separate newline): " <<endl;
  cin >> compid;
  cin >> idcomp;
  cout <<endl;
  index = -1;
  int dexin = -1;
  for(int i = 0; i < num; ++i)
  {
    if(arrStudents[i].getID() == compid) index = i;
  }
  if(index == -1)
  {
    cout << "Wrong ID entered, Exiting program now, Exit code 1" <<endl;
    exit(1);
  }
  for(int i = 0; i < num; ++i)
  {
    if(arrStudents[i].getID() == idcomp) dexin = i;
  }
  if(dexin == -1)
  {
    cout << "Wrong ID entered, Exiting program now, Exit code 1" <<endl;
    exit(1);
  }
  string betterid = arrStudents[index].CompareGPA(arrStudents[dexin]);
  cout << "Here is the ID of the student with the better GPA: " << betterid <<endl;

  cout <<endl;
  cout <<endl;
  cout << "Successfully reached the end of program!" <<endl;
  cout << "Exiting with exit code 0" <<endl;



  return 0;
}
