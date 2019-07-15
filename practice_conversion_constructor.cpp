
#if 0

#include <iostream>
#include <exception>
#include <conio.h>
#include <stdio.h>

using namespace std;

/*...........
conversion constructor ->  constructor with 1 argument without the function specifier explicit 
                       ->  type of the argument changed to class type 
                       -> automatic conversion

In case of conversion constructor
       ( single parametrized)-- copy---> valid
                            --- static cast  --> valid
                            --- direct intialization --> valid

.............*/
class abc
{
  int x;
public:
  abc(float p)
  {
    x=p;
  }

  void display()
  {
    cout<< x << endl;
  }

};


int main()
{
  abc aa(10.33);

  abc aa1 = 1; // Static cast 
  aa.display();
  aa1.display();
  aa=20;  // copy intialization example 
  aa = 30; // copy intialization example 
  aa.display();
  getch(); 
  return 0;
}

#endif