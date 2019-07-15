
#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// I inheritence - 
// Important note: base pointer can access the base variables and base destructor 
//               : derived pointer can access the base variable and derived variables with base and derived destructor 

// Therefore, to delete the object of derived class from based class pointer - WE NEED 'VIRTUAL KEYWORD' before the base destructor  



class base
{
public:
  int a;
  base()
  {
    
    cout << "I am in the base constructor" << endl;
  }
 virtual ~base()
  {
    cout << "I am in the base de-constructor" << endl;
  }

};

class xyz: public base
{
public:
  int c;
  xyz()
  {
    cout << "I am in the derived constructor" << endl;
  }
 ~xyz()
  {
    cout << "I am in the derived de-constructor" << endl;
  }


};




int main()
{
  {

    // Allocate base pointer to derived class
    base *bb = new xyz;

    // or 

    // Allocate first memory to derived pointer
    xyz *aa = new xyz();
    // copy the pointer to base pointer
    base *b = aa;   // b is a pointer  variable  which is equal to derived pointer
    


    cout << " address of the derived " << "    " << aa << endl; 
    cout << " address of the base" << "    " << b << endl; 
    cout << " address of the base" << "    " << bb << endl;

    delete b; // pointer to base class 
    
    //aa->a = 20;   // segmentation fault will come - because memory is already realsed
    
    
    
    //base *b = new xyz;
    //abc aa= d;

    //delete b;   // base class destructor called here but no call to derived class destructor


  }
  getch();
  return 0;
} 


#endif