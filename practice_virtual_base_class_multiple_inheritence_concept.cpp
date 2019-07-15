#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
// virtual base class- When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members.
// Eg- Class A ; Class B inherit from Class A, Class C inherit from Class A; Class D inherit from Class B and Class C. If A has something then D has 2 copies of it.

// During multiple inheritences - virtual base class concept comes 


class a
{
private:

protected:
  int x, z;
public:
  a()
  {
    x=10;
    z=20;
  }


};

class b: virtual public a // virtual keyword is used here before public
{

private:

protected:

public:


};


class c: virtual public a // if we don't keep virtual here then d object looks ambiguous which x value should take
{
private:

protected:

public:


};

class d: public b, public c
{
private:

protected:

public:
  void print()
  {
    cout<< x << "\n"<< z<< endl;
  }


};



/*
int main()
{
  d dd;
  dd.print();




  getch();
  return 0;
}
*/

#endif
