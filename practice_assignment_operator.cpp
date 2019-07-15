#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// copy the contents from already existing object to another object of same data type
// objects shares the same memory location.
// 
class abc
{
private:

public:
  int x, y, sum;
  //abc();
  abc(int m, int n)
  {
    x=m;
    y=n;
    sum = x+y;
    //cout << " I am in the normal constructor" << "\n" << sum << endl;
  }
  ~abc()
  {
    cout << " I am in the destructor" << endl;
  }

}; 

/*
// Assignment operator different to copy constructor
int main()
{
  abc aa(14,15); // obj created with arguments
  abc bb(20,25); // obj created with arguments

  cout << " Contents during object creation time" << "\n" << aa.x <<"    " <<aa.y << "\n" << bb.x <<"    " <<bb.y << endl;

  //abc cc = aa;  // call of copy constructor -:  new object created (cc)  from the previous object (aa) of same type;
  //cout << " Contents after copy constructor  " << "\n" << aa.x <<"    " <<aa.y << "\n" << cc.x <<"    "<<cc.y << endl;
  
  bb = aa; // assign the contents of object 'aa' to already existing object bb ( one by one) - "change in aa object automatically chnge in bb"
  cout << " Contents after assignment " << "\n" << aa.x <<"    " <<aa.y << "\n" << bb.x <<"    "<<bb.y << endl;
  
  aa.x =11;
  aa.y=100;

  cout << " Contents after change  " << "\n" << aa.x <<"    " <<aa.y << "\n" << bb.x <<"    "<<bb.y << endl;

  bb.x = 99;
  bb.y = 91;

  cout << " Contents after change  " << "\n" << aa.x <<"    " <<aa.y << "\n" << bb.x <<"    "<<bb.y << endl;
  
  getch();
  return 0;

} */


#endif