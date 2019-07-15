
#if 0

#include <iostream>
#include <memory>
#include <exception>
#include <conio.h>
#include <stdio.h>


using namespace std;

/*...........
Smart pointer --> Types --Used in --Resource sharing and transfer

auto--> it works as exclusive ownership model; Once the pointer out of scope it will delete automatically.
       copy constructor and the assignment operator case -- value goes from 1 ptr to 2ptr. Previous value becomes 0

shared --> It has reference counting model. One counter is there for maintaing record for how many times ptrs' point to reference
        --> and in case of decrement ->> counter decreases
        >>>> Many shared pointers point to the same memory location ( OWNERSHIP SHARED )

PROBLEM: Cyclic dependency (BEC OF OWNERSHIP SHARED AMONG ALL) ---> class a has ptr and class b has ptr1 and both pointing to each other---> so counnter will never be zero

unique --> there can only be one unique_ptr to any resource, 
           so any attempt to make a copy of unique_ptr will cause a compile time error.
      --> i.e. using std::move() function to transfer ownership of the contained pointer to another unique_ptr.

weak --> It has no reference model (No counter). NO CYCLIC DEPENDENCY because OWNERSHIP never shared but still access the other class




.............*/
class abc
{
  int *x;
public:




};



int main()
{
  { // Declare the smart pointer as an automatic (local) variable. 
  auto_ptr<abc> ptr1(new abc()); // 
  auto_ptr<abc> ptr2(ptr1); //  transfers ownership -> previous scope ends

  unique_ptr<abc> ptr3(new abc());
  unique_ptr<abc> ptr4(ptr3); // instances cannot be copied.  Useful when you want to tie the lifetime of the object 

  shared_ptr<abc> ptr5(new abc);
  shared_ptr<abc> ptr6(ptr5); // Multiple reference stored in the counter
  
  //use in conjunction with shared_ptr
  weak_ptr<abc> ptr7 = ptr5; // Initialized from the shared ptr
  weak_ptr<abc> ptr8(ptr7); 
  }
  getch(); 
  return 0;
}

#endif