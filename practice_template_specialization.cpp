#if 0

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

// Template specialization - specific data type handle in the function


template <class T> // T handles generic data type

class a
{
public:
  a(T x)
  {
    cout << " I am in generic template " << endl;
    cout << x<< endl;
  }
};

// syntax for template specialization
template<>

class a <char>  // after class name specify the data type
{
public:
  a(char y)
  {
    cout << " I am in specified template " << endl;
    cout <<y <<endl;
  }
};

/*
int main()
{
  a <int>aa(7);  // in case of template - when object created specify the data type.
  a <char>bb('j');

  getch();
  return 0;


} */


#endif
