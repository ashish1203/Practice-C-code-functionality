#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Also known as Member function template--- > Templates define inside the class templates or members of the class
// function template - generic data type- functn holding different types data- basic template - cannot take multiple data type simulatenously. There is another way of creating templates

/*..............Main Point   ......

Destructors and copy constructors cannot be templates. 
A member function template cannot be virtual
member function template in a derived class cannot override a virtual member function from the base class.

A non-template member function and a template member function with the same name may be declared.
............*/
template < class T, class U>

//return_type ftn_name ( data_type a , data_type b)
U smaller( T a, U b)
{
  //return(a>b?a:b);
  return(a+b);
}

/*
int main()
{
  int a = 10;
  float b = 12.09;
  cout << smaller(a,b) << endl;

  getch();
  return 0;
} */


#endif