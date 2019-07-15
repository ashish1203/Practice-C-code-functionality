#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// namespace - 
/*
(1) Class can also be declared inside namespace and defined outside namespace 
(2) Namespace declarations don’t have access specifiers. (Public or private)
(3) A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables etc) inside it. 
(4) Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.

*/

namespace abc
{
  int value = 10;
}

namespace abc_1
{
  float value = 20.3256;
}

namespace base
{
  class T
  {
  private:
    int ss;
  public:
    T()
    {
      this->ss = 10;
    }
  
  int print()
  {
    return ss;
  }
  };
}

int main()
{
  cout << abc::value << endl;  // inside the namespace - we can define the same variable 
  cout <<abc_1::value << endl; 

  base::T zz;
  cout << zz.print()<< endl;

  getch();
  return 0;
}

#endif