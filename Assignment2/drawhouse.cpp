#include <iostream>
#include <iomanip>
using namespace std;

int welcomeBanner();
bool isYesNo(string x);
void drawRoof(int w);
void drawBody(int h, int w);

int main()
{

  string name, answer;
  int height, width, counter;

  welcomeBanner();
  
  cout << "Hello, what is your name? ";
  cin >> name;
  cout << "Hi " << name << ", welcome to my house drawing program" <<endl;
  while(true)
  {
      
    cout << "Do you want to draw a house (y/n)? ";
    cin >> answer;
    cout <<endl;

    if( isYesNo(answer) == false )
    {
      cout << "Hope you like your "<<counter<<" houses"<<endl;
      return EXIT_FAILURE;
    }
    else
    {
      cout << "Enter an integer height: ";
      cin >> height;

      for(int i = 0; i < 4; i++)
      {
        if(i==3)
        {
          cout << "It seems you\'re having trouble with numbers, hope you like you "<<counter<<" houses\n program terminated\n";
          return EXIT_FAILURE;
        }

        cout << "Enter integer width (must be even and greater than 1): ";
        cin >> width;

        if( width % 2 == 0 && width >= 2)
        {
          break;
        }
        else
        {
          cout << "Invalid Input\n";
          continue;
        }
      
      }
      
      drawRoof(width);
      drawBody(height, width);
      counter++;
      
      
    }

  


  }
  
  return EXIT_SUCCESS;
}

int welcomeBanner()
{
  for(int i = 0; i < 10; i++)
  {
    cout << "*";
  }
  cout << "\nHouse Drawing"<<endl;
  for(int j = 0; j < 10; j++)
  {
    cout << "*";
  }
  cout << endl;
  return 0;
}

bool isYesNo(string x)
{
  bool yesNo;

  if(x == "Yes" || x == "yes" || x == "y")
  {
    yesNo = true;
  }
  else
  {
    yesNo = false;
  }

  return yesNo;
}


void drawRoof(int w)
{
  string space = " ", star = "**";

  for(int i = 0; i < w/2; i++)
  {
    for(int spa = w/2 - i - 1; spa > 0; spa--)
    {
      cout<<space;
    }
    for(int bla = 0; bla <= i; bla++)
    {
      cout<<star;
    }
    cout <<endl;
  }
}

void drawBody(int h, int w)
{
  for(int i = 0; i < h; i++)
  {
    cout << "|" << setw(w) << "|" <<endl;
  }
  for(int i = 0; i < w; i++)
  {
    cout << "-";
  }
  cout <<endl;
}