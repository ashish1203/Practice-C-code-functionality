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
    void print()
  {
    cout << real << "+i" << img << endl;
  }

  friend complex operator + (complex const &obj_1, complex const &obj_2);
};

  complex operator + (complex const &obj_1, complex const &obj_2) // 2 arguments passing which are coming from the object intialization
  {
    complex aa;
    aa.real = obj_1.real + obj_2.real;
    aa.img = obj_1.img + obj_2.img;
    return aa;
  }

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