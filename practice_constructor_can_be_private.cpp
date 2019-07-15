#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Constructor can be private- Yes, but can be accesed by 3 ways
//       (1) Through freind class - In friend class, create object of class
//       (2) Through Singleton design pattern- system is driven by one object of class or few
//       (3) Through Public static function - 


// Method 1 - by friend class

#if 0
class abc
{
private:
  abc()
  {
    cout << " base constructor called" << endl;
  }
public:

  friend class def;
  ~abc()
  {

  }
};

class def
{
public:
  abc aa; // or defined inside the constructor call  

  def()
  {

  }
  ~def()
  {

  }
};

int main()
{
  def dd;

  getch();
  return 0;
}
#endif 

// Method 3 - public static function 

class abc
{
private:
  int x, y;
  abc(int p, int q)
  {
    cout << " base constructor called" << endl;
    x= p;
    y = q;

  }
public:

  static abc display(int p, int q);
  void print()
  {
    cout << this->x <<endl << this->y <<endl;
  }

  ~abc()
  {

  }
};

abc abc::display(int p, int q)
{
  return abc(p,q);
}



int main()
{
  //abc dd(5,6);  // this one gives error - you can't access the private 

  abc dd = abc::display(5,9);
  dd.print();
  getch();
  return 0;
}

#endif