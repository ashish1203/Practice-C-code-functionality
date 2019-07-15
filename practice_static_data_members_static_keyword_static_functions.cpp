#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
/*......
Static variable:-> In function or inside class
Static members -> data members and functions

(1) Static variable defined inside the FUNCTION- lives till the end of function
(2) Static variables inside the CLASS- cannot initialized during the constructor call. intitialized explictly outside the class.
           class abc
           {
           public:
           static int i;
          };

       return-type class_name::i = 1;
(3) Static member function cannot be CONSTANT, VOLATILE AND VIRTUAL.
         static void print() const \
         static void print() volatile \
         virtual static void print()     // COMPILE ERROR
(4) Static member function- cannot access the non static members. (static data members and static member functions)
(5) Always invoke the Static member function using scope resolution operator. Does not depend upon the object of the class
(6) Static members defination should be there for execution with declaration


..................... */





class abc 
{
public:
  abc()
  {
    cout << " Abc constructor is called" <<endl;
  }
};

class def
{
public:
  static abc a;
  def()
  {
    cout << " Def constructor is called" <<endl;
  }
};

abc def::a;
int main()
{
  def d;

  getch();
  return 0;
}

#endif