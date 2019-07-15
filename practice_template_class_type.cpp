#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// function template - generic data type- functn holding different types data- basic template - cannot take multiple data type simulatenously. There is another way of creating templates

// rules- (1) whenever functn defined outside the class - then you need to call again the template defination
        //(2) when you are accesing the function from the class then after the class you need to put angular brackets with dta type <T> (after class name)
        //(3) when you make the objects, you need to explicitly defined the data type. <T>
template < class T, class U>

class a
{
  T a1; 
  U b1;
public:

  a(T x, U y)
  {
    a1=x;
    b1=y;

  }
  U printf();   // no need to pass the arguments as it is declare inside the class and acess the members of this class

};

// when we have to define the function; again call the template 
template < class T, class U>
U a<T, U>::printf()
{
  return (a1+b1);
}

/*
int main()
{
  // when object created ; we need to define the data type of the object
  a <int, float>aa (8,4.25);

  cout << aa.printf() << endl;



  getch();
  return 0;
} */


#endif