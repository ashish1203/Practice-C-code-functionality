/*

  // copied the data, and not the address
  //// User defined - Copy constructor -  initializes an object using another object of the same class. DEEP COPY
// deep copy 
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
class abc
{

private:

public:
  int *ptr;
  int z;
  int a;

  abc(int p)
  {
    cout<< " I am in the default constructor " << endl;
    ptr = new int;
    *ptr= p;
    z= *ptr;
    
  }


  abc::abc(const abc &x);
  void print()
  {
    cout << z << endl;
  }
  ~abc()
  {
    delete ptr;
}

};

  abc::abc(const abc &x)
  {
    cout<< " I am in the USER DEFINED copy constructor " << endl;

    this->ptr = new int;
    *ptr = x.z;
    z= *ptr;

  } 


int main()
{
  abc aa(11);  
  abc aa1(aa); 
  aa.print();
  aa1.print();
  aa.z = 10;
  aa.print();
  aa1.print();



  getch();
  return 0;
}

*/