
#if 0
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


// Overriding vs Overloading

// ----> over riding means - same function in the derivied class defined in the base class with same function name and arguments
//              int area (int len, int hgt)  -> base class
//              int area (int len, int hgt) -> derived class

//     > overloading means - same function different role -> different parameters and number of arguments
//          eg - int area (int length, int height)
//               int area (float length, float height, int sum)

class abc 
{
private:
  int a;
public:
  abc()
  {

  }
  void print()
  {
    cout<< " value of a" <<"      " <<endl;
  }
  ~abc()
  {

  }
};

class derived: public abc
{
private:

public:
  derived()
  {

  }
  void print()
  {
    cout << " I am in the derived class" << endl;
  }
  ~derived()
  {}
};


int main()
{
  //derived d = derived();
  derived d;
  d.print();

  abc aa = d;
  aa.print();
  



  getch();
  return 0;
}

#endif