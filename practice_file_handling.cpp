#if 0

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

#include <fstream> // this new header we have to include  for file operations

using namespace std;



/*
int main()
{
  // of stream for writing the data in file
  // file_obj automatically destructed 
  ofstream file_obj;    // this will create the file object 

  //ofstream file_obj("C:/Users/uidq9577/Desktop/510_process.txt"); // another way of calling the object with constructor
  file_obj.open("C:/Users/uidq9577/Desktop/aa.txt", ios::out); ios::out - write mode 
  //file_obj.close();

  if( file_obj.is_open() )  // is.open() - to check file is open or not 
  {
    cout << "file is already open" <<endl;
  }
  else
  {
    cout << "file is opening ......." <<endl;

    cout << "Enter_name" << "     " <<"Enter_ID_Num" <<"     " <<    "Enter_Department" << endl;
    cout << "Press ctr + z " << endl;
  }
  
  char name[30];
  int id_num;
  char dept[30];

  while ( cin >> name >> id_num >> dept )
  {
    //cout << name << id_num << dept; // a way to print the output
    file_obj << name << "     "  << id_num << "     " << dept << endl;   // for writing in the file we need to file object instead of cout 



  }
  
  file_obj.close();



 
  getch();
  return 0;
}

*/

// Reading from the file 
/*
int main()
{
  ifstream file_obj;
  std::string line;

  file_obj.open("C:/Users/uidq9577/Desktop/aaaa.txt", ios::in);  //ios::in - read mode 
  
  
  

  
  if (file_obj.is_open())
  {
    cout<< " already open" <<endl;
  }
  else
  {
    cout <<" working" <<endl;
  }

  char n_name[30];
  int  i_id;
  char d_dept[30];

  //file_obj >> n_name;

  // in c++ - no need to write EOF, it has capability of finding it own

  while( file_obj >>n_name >>i_id >>d_dept)
  {
     //file_obj >>n_name >>i_id>>d_dept;
    cout << n_name <<"     " << i_id << "     " << d_dept << endl;

  }
  file_obj.close();
  
  getch();
  return 0;

}
*/

#endif

