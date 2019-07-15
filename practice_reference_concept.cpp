#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int& fun();

// Refrence is just an alias of variable

// (1) - either as arguments 
// (2) either as return value - when your'e return we need to keep the value as static. Local variables cannot be return as reference

//(return-type) (reference or copy) (function name ( arguments))
int& func()
{
  static int x =10;
  return x;
}

int & func_1()
{
  int x =10;
  return x;
}

void swap(char *&p, char *&q)
{
  char *temp = p;
  p =q;
  q=temp;
}
int main()
{
  func() = 30;
  func_1() = 20;
  cout << func() << endl;  // when you return static variable - - it will remain for lifetime - return and intialized 
  cout << func_1() << endl; // when local variable return - it gets out of scope. - therfore, not changed


  char *str_1 = "ASHISH";
  char *str_2 = "MANISHA";

  swap(str_1, str_2);  // another example of passing reference
  cout << str_1 << endl;
  cout << str_2 << endl;
  getch();
  return 0;
}

#endif