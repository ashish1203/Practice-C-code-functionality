#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// IMPORTANT NOTE 

/*   > Passing values as function overloading - It is completely possible  */

// Ambiguity in Function Overloading
/*
Overloading - happens only same function with different arguments

Ambigous matches:- 

(1) Function return types are not considered unique -- int func() and char func()  --> The compiler will flag this as an error.

(3) Typedefs are not distinct
(4) If no exact match is found, C++ tries to find a match through promotion. In lesson 4.4 -- type conversion and casting, we covered how certain types can be automatically promoted via internal type conversion to other types. To summarize,
      •Char, unsigned char, and short is promoted to an int. 
      •Unsigned short can be promoted to int or unsigned int, depending on the size of an int 
      •Float is promoted to double 
      •Enum is promoted to int 
(5) If no promotion is possible, C++ tries to find a match through standard conversion. Standard conversions include:
      •Any numeric type will match any other numeric type, including unsigned (e.g. int to float) 
      •Enum will match the formal type of a numeric type (e.g. enum to float) 
      •Zero will match a pointer type and numeric type (e.g. 0 to char*, or 0 to float) 
      •A pointer will match a void pointer 

(6) Ambiguous matches are considered a compile-time error.

(7) Parameter declarations that differ only in a pointer * versus an array [] are equivalent.- Ambigous case
    Redefination -   int fun(int *ptr); 
                 -   int fun(int ptr[]);

(8) Parameter declarations that differ only in that one is a function type and the other is a pointer to the same function type are equivalent.
    Redefination -   void h(int ()); 
                 -   void h(int (*)());

(9) Parameter declarations that differ only in the presence or absence of const and/or volatile are equivalent. 
     Redefination -  int f ( int x) 
                  -  int f ( const int x)

(10) Two parameter declarations that differ only in their default arguments are equivalent. 
     Redefination -  int f ( int x, int y) 
                  -  int f ( int x, int y = 10)  */

int func(int p)
{
  int x =p;
  cout << "I am in this fun" << endl;
  return x;
}

int func(int &p)
{
  int a =p;
  cout << "I am fun" << endl;
  return a;
}
int main()
{
  int i =10;

  int &r = i;

  
  //cout<< func(10) << endl;  // passing values as function overloading possible
  cout<< func(i)<< endl;   // Here comes the ambiguity as passing variables bec it recived as normal variable and as reference also.
  //cout<< func(r) <<endl;




  getch();
  return 0;
}

#endif