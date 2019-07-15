#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
// contructor calls first from base then derived 
// destructor call first from derived then base

class base
{
public:
  base()
  {
    cout << " I am in the base class - constructor " <<endl;
  }
  ~base()
  {
    cout << " I am in the base class - destructor " << endl;
  }
  int var_a;
protected:
  int var_b;
private:
  int var_c;

};

class derived:public base
{
public:
  derived()
  {
    cout<< " I am in the constructor- derived " << endl;
  }

  ~derived()
  {
    cout<< " I am in the destructor- derived " << endl;
  }
  void printf()
  {
    cout << "I am in the derived class" << endl;
    var_a = 10;
    var_b = 20;
    //var_c =30; // private varibale cannot acces in the derived class
    cout << var_a << "\n" << var_b << endl;

  }

};

/*
int main()
{
  derived dd;
  dd.printf();
  getch();
  return 0;
} */

#endif