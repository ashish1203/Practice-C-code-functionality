#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// ********************* Shallow copy
// one by one- same adrress location ; no new memory allocated 

class abc
{

private:

public:
  int a;
  int b;

  // default constructor
/*
  abc()
  {
    cout<< " I am in the default constructor " << endl;
    a = 11;  // default constructor 
    cout<< a << endl;
  }
*/
  abc(int y)
  {
    a=y;
  }

  abc(abc &x)
  {
    cout<< " I am in the USER DEFINED copy constructor " << endl;
    this->a = x.a;
    
  } 
  
};

int main()
{
  abc aa(13);  // default constructor -- SHALLOW COPY
  abc aa1 = aa;  // Copy constructor -  initializes an object using another object of the same class. -SHALLOW COPY
  //cout<< aa1.a <<endl;
  
  // another way of copy constructor - pass by object- No new memory allocated 
  abc aa2(aa);  // intialize the object with other object
  //cout << aa2.a << endl;


  abc aa3 = aa; // overload = operator ( used 2 times one above)
  //cout << aa3.a << endl;

  cout << aa1.a << endl;
  //cout << aa3.a << endl;


  getch();
  return 0;
}

#endif

