
#if 0
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Inline function: If a function is inline, the compiler places a copy of the code of 
/*                     that function at each point where the function is called at compile time. Normal functions do not have any such functionality.
                     (1) Inline functions behave like macros. 
                     (2) A function not declared inline does not mean that the compiler cannot inline the function.
                     (3) Inline functions are parsed by the compiler whereas macros in a program are expanded by preprocessor. 
                     (4) Can inline functions extern? - YES
                     (5) Inline function do improve code performance but also might cause thrashing- increase the size of binary executable
                     (6) syntax -----> inline function_name(arguments) {};  */
/*
Advantages - (1) improve performance if no change in the function body
             (2) function call overhead stops. Push/puyll operation stops.
             (3) Useful in small code

Disadvantage- (1) too many inlines increase the binary executable file
              (2) too many inline also reduces speed of instruction from cache to primary memory

Important Note:  Inline is a request to compiler not a command. Sometimes, compiler reject the request

               (1) In case of loops
               (2) When function return other than void
               (3) if function is recursive or include switch and go to statements
               (4)  function contains static variables
*/


inline int func(int a , int b)
{
  static int sum = a+b;
  return sum;
}
int main()
{
  int c = func(10,55);
  cout << c << endl;

  getch();
  return 0;
}

#endif