#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// new - dynamic memory allocation 

// (1) int *ptr = new int  /* declaration and assignment
// (2) int *ptr = new int(10) /* initilization 
// (3) int *ptr = new int[10] /* block of memory - total 40 byte          
// (4) int *ptr = NULL;
//          ptr = new int

// delete - deletes dynamically allocated memory

// (1) delete ptr
// (2) delete[]ptr  /* deletes chunk of memory

/*
int main()
{
  int *p = new int(10);
  int num =6;

  int *a = new int[num];
  
  cout<< *p << endl;


  for (int i =0; i<num;i++)
  {
    a[i] = 2+i;
  }

  for (int i =0; i<num;i++)
  {
    cout<< a[i] << endl;

  }
  

  delete p;
  delete []a;

  getch();
  return 0;
}

*/

#endif