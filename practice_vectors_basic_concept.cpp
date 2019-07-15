#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <vector>  // to work with vector insert this header file 

using namespace std;

// Vectors- It is similar to dynamic arrays with the ability to resize automatically. 
// Stored as contigous memory location.
// Insertion, deletion handled automatically by container
// Insertion happens at last , in similar to that deletion starts from last

// Modifiers:

//assign() – It assigns new value to the vector elements by replacing old ones
//push_back() – It push the elements into a vector from the back
//pop_back() – It is used to pop or remove elements from a vector from the back.
//insert() – It inserts new elements before the element at the specified position
//erase() – It is used to remove elements from a container from the specified position or range.
//swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
//clear() – It is used to remove all the elements of the vector container
//emplace() – It extends the container by inserting new element at position
//emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

//Element access:

//reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
//at(g) – Returns a reference to the element at position ‘g’ in the vector
//front() – Returns a reference to the first element in the vector
//back() – Returns a reference to the last element in the vector
//data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.


//Iterators

//begin() – Returns an iterator pointing to the first element in the vector
//end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
//rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
//rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
//cbegin() – Returns a constant iterator pointing to the first element in the vector.
//cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
//crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
//crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)


/*
int main()
{
  vector <int> v;

  for (int i =0; i<=5;i++)
  {
    v.push_back(i);
    
  }
  for (auto i = v.begin(); i < v.end(); i++)
  {
    cout << *i <<"/n" << &i << endl;

  }



  getch();
  return 0;
}
*/

#endif