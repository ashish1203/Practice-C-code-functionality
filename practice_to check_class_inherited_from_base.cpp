#if 0


#include <iostream>
#include <conio.h>
//#include <stdio.h>

using namespace std;


class T
{

};

class P: public T
{
public:
  bool print()
  {
    cout<<"hello "<<endl;
    return (std::is_base_of <T,P>::value ) ;// use
  }

};

template <typename R, typename K>

//template <class W, class Q>
class derived
{
private:

public:
  R static print() // here we make static to call - because I am not using the object of the class to caLL THE function which is defined in the class
  {
    cout<<"hello world"<<endl;
   return (std::is_base_of <T,P>::value) ;// use
  }

};

template < class T, class P>

bool Isderived()
{
  
  
  cout<<"another hello world"<<endl;
  
  
   return derived<T,P>::print(); // calling print function defined in the derived class
}

/*
int main()
{
  bool bb;
  derived <bool, int> d;

  bb= Isderived<int ,float>();  // calling isdervied function here which takes templates of class T,P
  cout<< bb<<endl;

  getch();
  return 0;
}  */


#endif