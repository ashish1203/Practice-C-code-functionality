#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


typedef struct
{
  char a; //1
  int b; // 4
  //float c; //4

}abc;

int * f( int *ptr, int size )
{
  int *innerPtr;    
  //innerPtr = (int*) malloc( size * sizeof (int) );

  innerPtr = ptr +size;

  /* rest of the code */
  return innerPtr;
}

int main()
{
  int counter =0;
  int size =3;
  int aa_1 =0;
  int *w;
  *w =10;

  int *arr_ptr = (int*) malloc ( sizeof(int) * 3); // 12

  for (int i =0; i< size ;i++)
  {

    int *arr_ptr = (int*) malloc ( sizeof(int) * 3); // 12
    //1arr_ptr[i] = i;
    int aa = sizeof(arr_ptr);
  
    aa_1 = aa_1 + aa;
    cout << " size of array  " << "     " << aa_1<< endl;


    

  }

  int *tem_arr = arr_ptr + 1;

  //arr_size = tem_arr[-1];

  //int *arr =NULL;

  // arr will hold the address of the first byte 
  //arr =  (int *) malloc( size* sizeof (abc));  // 2*8 = 16


  //cout << " Starting address " << "     " << p << endl;
  //size=size;
  //int *a = f( arr, size );
  //cout << " size of int " << "     " << sizeof (abc)  << endl;
  //cout << " size of array  " << "     " << tem_arr<< endl;

  getch();
  return 0;


}

#endif