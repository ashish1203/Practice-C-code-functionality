#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


//    new vs malloc 

// new - is a operator, can be overide(overload), return exacts data type, on failure exception gives -throws, memory allocated from free store, compiler gives the size of array

// malloc - is a function, conventially not overload, return (void*) data type, on failure gives NULL, memory allocated from Heap memory, compiler will no give the size of array


// new operator allocates memory then calls the constructor, 
// malloc only allocates the memory

int main()
{
  int *p = NULL;
  int *p = new int(10);  // constructor call 

  // if memory is not available then throw error 
  if (!p)
  {
    throw std::overflow_error(" size is not available");
  }

  // allocate array size memory
  int *p_1 = new int [10]; // 4* 10 - size of memory allocated --> array allocated 

  // delete memory space but still pointer points the first address slot
  delete p;    // free memory 
  delete [] p_1;  // free array memory



  int *ptr = (int*) malloc (sizeof (int) );

    if (ptr ==NULL)
    {
      cout <<" error" << endl;
    }

   free(ptr);


  getch();
  return 0;
}

#endif