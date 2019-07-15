
#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Constructor -overloading - possible but arguments must be  different


class abc
{
  int a;
  char b;
public:
  abc()
  {
    a = 10;
    b=20;
    int out = a * b;
    cout << out << endl;
  }
  abc(float p, float q)
  {
    int output = p *q;
    cout << output << endl;

  }
};


int main()
{
  abc aa; // no argumen only object created 
  abc aa1(5.6,6.8); // new arguments passed 

  getch();
  return 0;
}

#endif