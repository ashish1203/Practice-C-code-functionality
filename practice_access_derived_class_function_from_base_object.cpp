
#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


// Access derived class function from base object- Can't possible as polymorphism happens from base to derived not derived from base

// virtual function in the base class can be overidden in derived class

// without virtual - to access the derived functions - you need to downcast

class base
{
private:
  int a,b;
public:
  base(int p=0, int q=0)
  {
    this->a = p;
    this->b = q;

  }
  virtual int sum(int &)
  {
    int total = this->a + this->b;
  }

  virtual ~base()
  {

  }
};

class derived:public base
{
  void print()
  {
    cout << " I am in the derived class" << endl;
  }

};

int main()
{
  derived d;
  base b;
  base & b = d;  
  auto & bb1 = dynamic_cast <derived &>(b);  // when you're doing dynamic casting you need to have virtual function in the base class and virtual destructor.
 
  
  //static_cast<derived &>(aa)->print();  // downcast to derived pointer but it is not recommended
  
  getch();
  return 0;
}

#endif