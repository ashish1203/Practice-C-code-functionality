#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


// Private members can be accessed outside the member functions or without Friend function - USING POINTERS but it is not recommended - RUN TIME WE CAN CHANGE

// If it is accessed then there is no encapsulation ? Ans- No it is user defined not accidential change which is actual concept of encapsulation

class abc
{
private:
  int a;

public:
  int print()
  {
    return a;
  }

};

int main()
{
  //int *p = NULL;
  abc aa;
  int *p = (int*)&aa;  // p variable point to the aa object
  int *u;
  abc *t;
  u = (int*)&aa;  // u variable of type integer save the address of the 'aa' object which is also pointing to integer type - need Typecasting because u variable is integer type
  t = &aa; // t variable of type class 'abc' save the address of the object 'aa'
  

  cout << " address of pointer " << "     " << p << endl;
  cout << " pointer pointing to " << "     " << *p << endl;

  *p = 10;
  *u = 100;
  //*t =1000; // compile error because t is not int type
   
  //cout << " private member value " << "     " << aa.a << endl;   // compile error  because ' aa.a ' main is not friend of class abc 
  cout << " private member value " << "     " << aa.print() << endl;



  getch();
  return 0;
}

#endif
