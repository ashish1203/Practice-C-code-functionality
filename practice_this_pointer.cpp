#if 0

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// This pointer ---.
/*               (1) It is a constant pointer that hold the address of current object

               (2) "This" pointer is passed as a hidden argument to all nonstatic member function.
               (3) "This" pointer - available as local variable inside the non static function. */


// (1) Sample program -- You can't change the address of the object

/*
class Test 
{ 
private: 
  int x; 
public: 
  Test(int x = 0) 
  { this->x = x; }  // 5 value intialized
  void change(Test *t) 
  { this = t; // // Error: Expression is not assignable -- 
    t= this;
  } 
  void print() 
  { cout << "x = " << x << endl; 
  } 
}; 
  
int main() 
{ 
  Test obj(5); 
  Test *ptr = new Test (10);  // ptr memory allocated
  obj.change(ptr); 
  obj.print(); 
  getch();
  return 0; 
} 

*/

// Sample program - 2 - this pointer can't use inside the static function

/*
class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; } 
  static void fun1() { cout << "Inside fun1()"; } 
  static void fun2() { cout << "Inside fun2()"; this->fun1(); } 
}; 
  
int main() 
{ 
  Test obj; 
  obj.fun2(); 
  return 0; 
} 

*/

// Sample program 3- Reference to a local object is returned

/*
class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test (int x = 0, int y = 0) { this->x = x; this->y = y; } 
  Test setX(int a) { x = a; return *this; } 
  Test setY(int b) { y = b; return *this; } 
  void print() { cout << "x = " << x << " y = " << y << endl; } 
}; 
  
int main() 
{ 
  Test obj1; 
  obj1.setX(10).setY(20); 
  obj1.print(); 
  getch();
  return 0; 
} 

*/

//Sample program -4 -- delete is used only with ptr that is allocated with new 

/*
  class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; } 
  void setX(int a) { x = a; } 
  void setY(int b) { y = b; } 
  void destroy()  { delete this; }  // undefined behavior 
  //void print() { cout << "x = " << x << " y = " << y << endl; } 
}; 
  
int main() 
{ 
  Test obj; 
  //obj.destroy(); 
  //obj.print(); 
  getch();
  return 0; 
} 

*/

#endif