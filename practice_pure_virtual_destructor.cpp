#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Pure virtual destructor possible- Yes and with function body(must otherwise linker error)
// Why function body requires- while destruction it knows which destructor will be called i.e. base or derived

class base 
{
private:

public:
  base()
  {

  }
  virtual ~base() = 0;  // makes this class abstarct - we will not able to make the object of this

};

base::~base()
{
  cout << " I am in a base class" <<endl;
}


class derived: public base
{
private:

public:
  derived()
  {

  }

  ~derived()
  {
    cout << "I am in a derived class" << endl;
  }


};

int main()
{
 

 base *ptr = new derived;
 delete ptr;

#if 0
  int row = 5;
  int col = 5;
  int *ptr = new int [row *col]; // make it long 1 dimensional

  int c = ptr[
#endif
  getch(); 
  return 0;
}




#endif
