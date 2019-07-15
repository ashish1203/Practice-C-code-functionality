#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
// same function but different operations - polymorphism concept comes during compile time (function overloading and operator overloading) and run time (function overriding)
// abstract class - class with pure virtual function- you don't have any permission to create objects for the respective class
// pure virtual function - no body; and any derived class over-rides this function- redefined in the derived class
// regular virtual function -  called according to the type of the object pointed
// virtual keyword

class a
{
protected:
  int x, z;
public:
  a()
  {
    cout <<" I am in the base constructor" << endl;
  }

  // without virtiual compiler fixed the defination of show to the base class- static linkage
//  void show(int , int )  

  // with virtual keyword - compiler works like dynamic linkage- to which object currently it is refferring
  ~a()
  {
    cout <<" I am in the base destructor" << endl;
  }
private:
  virtual void show(int a1, int b1)  
  {
    //cout << "I am in the base class" << endl;
    x = a1;
    z = b1;
    cout <<x <<"\n" <<z <<endl;

  } 

  // pure virtual ftn
  //virtual void show(int a1, int b1) = 0; // tells the compiler - that function has no body and redefined in the derived class.

};

class b: virtual public a
{
protected:
  int sum, area;
public:
  b()
  {
    cout <<" I am in the derived  class b constructor" << endl;
  }
  ~b()
  {
    cout <<" I am in the derived class b de-constructor" << endl;
  }
  void show(int x , int z)
  {

    sum = x + z;
    area = x*x +z*z;
    cout <<sum <<"\n" <<area <<endl;

  }

};


class c: virtual public a
{
protected:
  int sum_1, area_1;
public:
    c()
  {
    cout <<" I am in the derived class c  constructor" << endl;
  }
  ~c()
  {
    cout <<" I am in the derived class c de-constructor" << endl;
  }
  void show(int x, int z)
  {

    sum_1= x*x +z;
    area_1 = z*x;
    cout <<sum_1 <<"\n" <<area_1 <<endl;

  }

};




int main()
{
  {
  // virtual case dynamically linkage happens and each show function gives differnt results
  //a nn;
  a *aa;
  b bb;
  c cc;
}

  //aa =&nn;
  //aa->show(50,51);

  //b bb;
  //c cc;
  //bb.show(10,20);
  //cc.show(20,30);

  //aa =&bb;
  //aa->show(10,20);

  //aa= &cc;
  //aa->show(20,30);


  getch();
  return 0;
}




#endif