#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


int main()
{
  int num_rows = 4;
  int num_cols = 5;
  int count = 5;

  // memory allocated
  // first allocate for row-wise
  int **arr = new int *[num_rows];

  // col wise memory allocation in each row
  for (int i=0; i<num_rows; ++i)
  {
    arr[i] = new int [num_cols];
  }


  // write down in memory
  for (int i=0; i<num_rows; i++)
  {
    for (int j=0; j<num_cols; j++)
    {
      arr[i][j] = count++;
    }
  }
    
  // print
  for (int i=0; i<num_rows; i++)
  {
    for (int j=0; j<num_cols; j++)
    {
      cout<< arr[i][j] <<"\n" << endl;
    }
  }



  getch();
  return 0;

} 

#endif