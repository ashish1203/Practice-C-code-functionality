#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Virtual function can be over-ridden if they are defined as private.But in main function we need to provide the permission to accesss the variable.
// Private members can only be accessed by friend function

class a
{
protected:
  int x, z;
public:

private:
  virtual void show(int a1, int b1)  
  {
    //cout << "I am in the base class" << endl;
    x = a1;
    z = b1;
    cout <<x <<"\n" <<z <<endl;

  } 
  //friend int main(); // we make friend function 'main' so that it can access the private variable


};

class b: public a
{
protected:
  int sum, area;
public:

private:
  void show(int x , int z)
  {

    sum = x + z;
    area = x*x +z*z;
    cout <<sum <<"\n" <<area <<endl;

  }

};


class c: public a
{
protected:
  int sum_1, area_1;
public:

private:
  void show(int x, int z)
  {

    sum_1= x*x +z;
    area_1 = z*x;
    cout <<sum_1 <<"\n" <<area_1 <<endl;

  }

};



/*
int main()
{

  a *aa;

  b bb;
  c cc;

  aa =&bb;
  aa->show(10,20); // if 'int main' is not friend type then compiler takes the defination of show function as private from base class.

  aa= &cc;
  aa->show(20,30);


  getch();
  return 0;
}

*/


#endif