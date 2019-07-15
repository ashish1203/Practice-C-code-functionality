#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// delete is used to free memory allocated with new and pointer declared as NULL, 
// whereas delete [] is used to free memory allocated with new []


// Stack frame - where information is stored and retrieved later. Return values, machine registers- mainly recursive functions
int main()
{
  // (1) 
  int x;
  int *ptr = &x;  // x is allocated in the stack frame  

  // (2) 
  int *ptr_1 = (int*) malloc(5* sizeof(int));  // Not recommended with malloc 

  // (3)
  int *ptr_2 = new int; // pointer declaration

  // (4)
  int *ptr_3 = new int[10]; // heap memory allocated

  // (5)
  int *ptr_4 = NULL; // ptr is null 

  // (6)
  //void *ptr_5; // ptr is void

  //delete ptr_5;

  delete ptr_4;

  delete [] ptr_3;

  delete ptr_2;

  free(ptr_1);

  //free(ptr); // you cannot use it because ptr has the stack variable which is not stored in the heap memory

  getch();
  return 0;
}

#endif





