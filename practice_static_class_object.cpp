#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Static class object





class abc
{
private:
  int a_1, b_1; 
protected:

public:
  abc()
  {
    cout << " I am in the constructor" << endl;
  }
  static void print() 
  {
    cout<< " I am a static function - 1" << endl;
  }
  ~abc()
  {
    cout << " I am in the destructor" << endl;
  }


};


/*
static abc cc; // global static function- first this will call contructor - destructor \
                                    of this obj called after the end of main


int main()
{
  int cc = 1;
  cout << "Main function starts " << endl;
  
  if (cc=1)
  {
    static abc aa; // Local statically obj defined - its scope remains till the end of the function
    
    
  }
 
  cout << "i am still in main function" << endl;
  

  
  getch();
  return 0;
}

*/


#endif
