
#if 0

#include <iostream>
#include <exception>
#include <conio.h>
#include <stdio.h>

using namespace std;

/*...........
Smart pointer --> It is a wrapper over the raw pointer
 --> It is a class template stores in the stack and intialize by raw pointer that points to heap allocated object
--> The smart pointer destructor contains the call to delete, and because the smart pointer is declared on the stack,
    its destructor is invoked when the smart pointer goes out of scope, even if an exception is thrown somewhere further up the stack.
--> pointer operators, -> and *, which the smart pointer class overloads to return the encapsulated raw pointer.

--> Let the smart pointer delete the object.




.............*/
class abc
{
  int *x;
public:
  int a;
  char b;
  explicit abc(int *p=NULL)
  {
    x = p;
    

    
  }

// overloading defrencing operator --> returns the value therefore it returns the address

int & operator *()
{
  return *x;
}



// overloading referencing operator --> must return the pointer to the class
abc * operator  ->()
{
  return this;
}

int display(abc *ptr)
{
  cout <<" I am ashish" << endl;
  int aa =56;
  ptr->x = &aa;
  
  return *x;
}

};



int main()
{
  {
  abc ptr(new int()); // ptr is a smart obj pointer allocated in stack --> takes raw dynamically pointer points to heap
  *ptr= 20;
  cout << *ptr << endl;

  
  int s = ptr.display(&ptr);
  ptr->display(&ptr);  // overload -> operator ---> obj is used as pointer to access the functions
  cout << s << endl;

  
  
  }
  getch(); 
  return 0;
}

#endif