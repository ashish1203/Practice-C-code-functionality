#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// User defined copy constructor - works when we have dynamically allocated memory or non -null pointer variables being copied. 

// In the case - If we use normal default constructor - bec it does shallow copy it will affects all the variables as in case pointer it just copy the address of the pointer.

// Deep copy allocates the new memory allocation and then copy the values. Source and destination remains different


class abc
{
private:
  int *p;
  
public:
  abc(int p1)
  {
    p = new int (10);
    *p = p1;

  }
  abc(const abc &p1);


  ~abc()
  {

  }

};

abc::abc(const abc &p1)
  {
    p = new int;
    *p=*p1.p;
    cout << "I am in the user defined copy constructor" << endl;
  }

/*
int main()
{

  abc p1(11);
  abc p2 = p1;


  getch();
  return 0;
}

*/

#endif
