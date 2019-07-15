#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// volatile qualifier- prevent the compiler from optimization on objects. Variable values can change outside the scope of the current code. 
// System will only read the current value of the variable and does not store the value in the temporary register.

/*
int main()
{
  //without optimization - value changed. If we ON the optimization then compiler will not allow the value to change because of constant type.
  const int a = 10;

  // if we make volatile it will not allow the compiler to perform optimization while optimization is ON
  //const volatile int a =10;


  int *p = (int *) &a;

  cout << *p << endl;

  *p = 100;
  cout << *p << endl;



  

  getch();
  return 0;
} */

#endif 