#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// copy contructor - copy the already existing object of a class type.
// creates an object by initializing it with an object of the same class, which has been created previously. ( type must be same)

// used when- (1) object is return from the function (2) object is passed as argument to a function.

// if we don't defined copy_constructor; in that case compiler makes a copy constructor. 

// during memory allocation and pointer variables defined in the class; it is required to make copy constructor.

// Representation - class name( const class name &obj) {}

// Normal copy constructor will do shallow copy - copy the contents individually one by one

// 
class abc
{
private:
  int x, y;
public:
  //abc();
  abc(int m = 0, int n = 0)
  {
    x=m;
    y=n;
    cout << " I am in the normal constructor" << endl;
  }
  ~abc()
  {
    cout << " I am in the destructor" << endl;
  }

}; 

/*
// normal copy constructor
int main()
{
  abc aa, bb;
  abc cc = aa;  // call of copy constructor -:  new object created (cc)  from the previous object (aa);


  bb=aa; // assigment operator :- already created object intialized with the previous object
  getch();
  return 0;

} */

#endif