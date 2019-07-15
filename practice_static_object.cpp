
/*......

(1) Static object- ? C++ supports both local static object and global static object
                  class abc
                  {

                };
                abc aa;  // statck based allocation
                static abc aa; // static object
Main Point: static object is destroyed at the termination of program.
..................... */

#if 0

// 1 - Local static object

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class abc 
{
public:
  abc()
  {
    cout << " Abc constructor is called" <<endl;
  }


  ~abc()
  {
    cout << " Abc de-constructor is called" <<endl;
  }
};

void print()
  {
    static abc aa; // local inside the function --> first main function then executes
  } 


int main()
{
  
  cout<< " main starts" << endl;
  {
  print();
  }

  getch(); 
  return 0;
  

}

#endif

#if 0
// 2 - Global static object


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class abc 
{
public:
  abc()
  {
    cout << " Abc constructor is called" <<endl;
  }


  ~abc()
  {
    cout << " Abc de-constructor is called" <<endl;
  }
};


static abc aa;   // global static object - first it will be called and then main function executes


int main()
{
  cout<< " main starts" << endl;
  getch();
  return 0;
}
#endif



