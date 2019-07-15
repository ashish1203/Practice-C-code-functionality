#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Size of empty class - 1byte. 
//It will be not = 0 otherwise 2 objects have the same address. It is standard.

class fgh
{

};

class abc
{
  int b;
};

class jkl
{
  int a;
};

class xyz: public abc
{

};

class asd: virtual public abc
{

};

class qwe: public abc
{
  char c;
};

class rty: virtual public abc
{
  char c;
};

int main()
{
  cout << sizeof(abc) << endl; // own(4) byte
  cout << sizeof(jkl) << endl; // own(4) byte

  cout << sizeof(xyz) << endl; // own (0) + derived (4)
  cout << sizeof(asd) << endl; // virtual derived = 8      
  cout << sizeof(qwe) << endl; // own(1) + derived (4) = 8
  cout << sizeof(rty) << endl; // own(1) + virtual derived ( base class inherit only once) + 4 + offset pointer

  getch();
  return 0;
}

#endif
