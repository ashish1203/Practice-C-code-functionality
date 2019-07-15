#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Static variable defined inside the FUNCTION- lives till the end of function

// Static variables inside the CLASS- cannot initialized during the constructor call. 
// It need to intitialized explictly outside the class. ( MOST IMPORTANT)

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
    cout<< " I am a static function - 1" << endl;
  }

  // // static member function- cannot access the non static members. They are allowed to access the static functions and static members.
  static  void show(int p, int q)   
  {
    cout<< " I am a static function - 2" << endl;
    a_1 =p;
    b_1 = q;

    cout <<a_1 <<"\n" <<b_1 <<endl;

  } 


};

class b: public a
{
protected:
  int sum, area;
public:



};



int a::a_1=0;  // static variable explicitly defined
int a::b_1=0;

/*
int main()
{
  //a aa;
  //aa.show(10,20); // Static member function invokation not allowed from ' object. "- as static function \
                    not dependent upon obj

  a::print();

  a::show(10,20); // Always invoke the Static member function using scope resolution operator. 
  getch();
  return 0;
}

*/


#endif

