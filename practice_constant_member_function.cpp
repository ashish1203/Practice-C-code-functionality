#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Constant member function -  const member function that attempts to change a member variable \
//                               or call a non-const member function will cause a compiler error to occur.

class abc
{
private:
  int x,y;
public:
  abc(int m, int n)
  {
    x=m;
    y=n;
    cout<< " I am in the constructor" << endl;
    cout << x <<"\n" << y << endl;

  }
  void print()   // if constant then called by other constant function
  {
    cout << " I am in the print function" << endl;

  }
  // const member function 
  int sum(abc const &mm) const
  {
    int sum, sum_1;
    sum_1 = mm.x +mm.y; // mm is constant
    //mm.x= 20; // compile error - as mm is constant
    cout << " sum_1" <<"    " << sum_1 << endl;

    //x = 22; // const function does not allow to change the member variable
    sum = x + y;
    //print(); // const function does not allow to call the non-const function
    return sum;
    
  }
  ~abc()
  {
    cout<< " I am in the destructor" << endl;
  }
};


/*
int main()
{
  cout<< " I am in the main " << endl;
  abc aa(10,20);
  int aaa = aa.sum(aa);

  const abc nn(11,13);  // object is constant here 
  int vv= nn.sum(nn); // it has to be received in constant format

  cout << aaa << endl;
  getch();
  return 0;
} 
*/

#endif