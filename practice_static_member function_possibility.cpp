#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Static variable defined inside the FUNCTION- lives till the end of function

// Static variables inside the CLASS- cannot initialized during the constructor call. 
// It need to intitialized explictly outside the class.

// static member function cannot be CONSTANT, VOLATILE AND VIRTUAL. 
      /* static void print() const \
         static void print() volatile \
         virtual static void print() */    // COMPILE ERROR

// constant member function not allowed to modify the object.
//whereas static member have no dependency on object therefore no need to keep constant 



class a
{
private:
  static int a_1, b_1; // if these variable are static then static member function 'show' access these variables.
protected:
  int x, z;
public:

  static void print() 
  {
    int aa= 10;
    //x=aa; // static member function- cannot access the non static members.
    a_1= 10; // They are allowed to access the static functions and static members.
    cout<< " I am a static function - 1" << endl;
  }


};


/*
int main()
{
  //a aa;
  //aa.show(10,20); // Static member function invokation not allowed from ' object. "- as static function \
                    not dependent upon obj

  a::print(); // Always invoke the Static member function using scope resolution operator.

 
  getch();
  return 0;
}

*/

#endif

