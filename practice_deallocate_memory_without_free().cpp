
#if 0
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


// Realloc ->  void *realloc(void *ptr, size_t size); 
// If “size” is zero, then call to realloc is equivalent to “free(ptr)”. 
//


// 
int main()
{
  int *p = (int*) malloc(5 * sizeof (int));

  realloc(p,15);
  getch();
  return 0;
}
#endif