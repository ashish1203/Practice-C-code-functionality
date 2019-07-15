#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Can virtual function be static - No
// Function virtual then it removes the ambiguous nature of current obj. Obj referes to the run time linkage.


/*
class a
{
protected:
  int x, z;
public:

  static virtual void show(int a1, int b1)   // Error: only non-static members can be virtual
  {
    x = a1;
    z = b1;
    cout <<x <<"\n" <<z <<endl;

  } 


};

class b: public a
{
protected:
  int sum, area;
public:

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

  void show(int x, int z)
  {

    sum_1= x*x +z;
    area_1 = z*x;
    cout <<sum_1 <<"\n" <<area_1 <<endl;

  }

}; 


*/


/*

int main()
{

  //a nn;
  a *aa;
  //aa =&nn;
  //aa->show(50,51);

  b bb;
  c cc;
  //bb.show(10,20);
  //cc.show(20,30);

  aa =&bb;
  aa->show(10,20);

  aa= &cc;
  aa->show(20,30);


  getch();
  return 0;
}

*/

#endif 
