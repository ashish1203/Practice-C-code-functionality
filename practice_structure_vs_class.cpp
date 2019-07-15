#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


// Structure is not secure - everything is Public
// Class is secure - everything default is Private

///////////////////////////////////
typedef struct
{
  int a;  // default is public 
}asd_1;


typedef struct
{

}asd;

/////////////////////////////////

//------------------------------
class abc
{
//public:

  int q;  // default members is private 
};

class jkl
{

};

//-----------------------------

//++++ INHERTIENCE ++++ ///
// CLASS INHERTIENCE
class jkl: public abc  
{

}

// STRUCTURE INHERITENCE
struct asd: public asd_1
{
  ;
};


int main()
{
  //d.q = 10; // compile error - because In class default is private

  asd f;    // derived structure object
  jkl d;    // derived class object

  //d.q = 10;  // compile error - becase in class inheritance default is private

  f.a = 10; // no error default is public

  getch();
  return 0;
}

#endif