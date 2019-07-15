#if 0

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

class complex
{
private:
  int real, img;  // data members of the class
public:
  // constructor call 
  complex (int r =0, int i =0)
  {
    real = r;  // intialization of the members
    img = i;
  }

  // function defination
  complex operator + (complex const &obj) // + operator defination given ..passing one argument 
  {
    complex aa;
    aa.real = real + obj.real;
    aa.img = img + obj.img;
    return aa;
  }

  void print()
  {
    cout << real << "+i" << img << endl;
  }
};

/*
int main()
{
  complex bb_1(12,10), bb_2(13,19); // 2 objects are created  bb_1 makes 
  complex cc = bb_1 + bb_2;
  cc.print();
  
  getch();
  return 0;

} */

#endif