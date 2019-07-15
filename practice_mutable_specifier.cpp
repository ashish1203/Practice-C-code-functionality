
#if 0 
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


/*.................
NOTE: -> If object is not constant then it can access the non-const as well const functions, However
        >>>> if object is constant then constant function is required.



.....................*/


class abc
{
private:
  mutable int a; // values are mutable -> which can be changed otherwise it will not change
  mutable char b[20];


public:
   int bb;

  abc(int p, char *q)
  {
    a=p;
    strcpy(b,q);
  }

  abc()
    {
      int bb = 100;
      char *b = "Ramesh";
      //cout<< " value of bb ->"  <<bb << endl;
  }

  void display() const
  {
    cout<< "value of a ->"  << a << endl;
    cout<< " my name is ->"  <<b << endl;
  }

  void change(int x, char *y) const
  {
    a =x;
    strcpy(b,y);
  }

};

int main()
{
  //const abc a(20, "ashish");  // obj is const - it will not allow to change the values of data members

  const abc a1;
  a1.bb=111;   // error is showing --->>> expression must be modifiable ---> bec obj is constant 
  cout<< " value of bb ->"  << bb << endl;

  //a.display();
  //a.change(200, "Mohan");
  //a.display();


  getch(); 
  return 0;


}

#endif 