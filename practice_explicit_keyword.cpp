
#if 0

#include <iostream>
#include <exception>
#include <conio.h>
#include <stdio.h>

using namespace std;

/*...........
In case of conversion constructor
       ( single parametrized)-- copy---> valid
                            --- static cast  --> valid
                            --- direct intialization --> valid

To protect this automatic conversion --> We use Explicit Keyword

.............*/
class abc
{
  int x;
public:
  explicit abc(float p)
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
  abc aa(10.33);  // Direct initialization ---> Possible

  abc aa1 = 1; // Static cast -- > COMPILE ERROR
  aa.display();
  aa1.display();
  aa=20;  // copy intialization example  -- > COMPILE ERROR
  aa = 30; // copy intialization example -- > COMPILE ERROR
  aa.display();
  getch(); 
  return 0;
}

#endif