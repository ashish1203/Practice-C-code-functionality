#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Friend class - syntax ---> friend class class_name;
// Friend function - syntax --> friend function_name(arguments)
// Global friend function  --> declaration inside the class and defination outside the class
class A
{
private:
  int a;
  float b;
  int c;

public:
  // constructor call - parametrized arguments
  A::A(int p, float q, char r)
  {
    a=p;
    b=q;
    c=r;
  }

  void print()
  {
    cout << "value of a" << a << "value of b" << b <<"value of c" << c << endl;
  }

  // Friend class-
  friend class B; //  Use the private members of the Class A in the class B

  friend int sum(A &m); // global friend function - defination of the function out of the class 

};

// defination of the frnd function - access the private members of the class
int sum(A &m)
{
  int j = m.a + m.b;
  return j;


}

class B
{
private:
  int w;
public:
  B()
  {
    w=0;
  }

  void show(A &z)  // reference of the class passed 
  {
    //cout << "values" << z.a << endl;
    z.print();
    
  }
};




int main()
{
  A bb_1(10,15,17); // 2 objects are created  bb_1 makes 
  B bb_2;
  bb_2.show(bb_1);
  int v = sum(bb_1);
  cout<< v<< endl;
  
  getch();
  return 0;

} 

#endif
