#if 0


#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

/*              
Destructor can be private? - Yes, deletion possible either friend function or static function
Constructor can be private?  Yes, construction of base possible through friend function

           */

// 1 point - // object cannot access the private members directly. If I make it public then it will not show error
#if 0
class base
{
private:
  base()
  {
    cout << " I am in base constr " << endl;
  }

  ~base()
  {
    cout << " I am in base destruc " << endl;
  }
protected:


public:

friend class derived;

};

class derived
{
  base bb;
public:
  derived ()
  {
    cout << " I am in derived constr " << endl;
  }

  ~derived ()
  {
    cout << " I am in derived destruc " << endl;
  }
};

int main()
{
  {
  derived dd; // object cannot access the private members directly. If I make it public then it will not show error
  }
  getch();
  return 0;

} 
#endif

// 2 point - private construtor and dynamic allocation

#if 0
class base
{
private:
  base()
  {
    cout << " I am in base constr " << endl;
  }

  ~base()
  {
    cout << " I am in base destruc " << endl;
  }
protected:


public:


};


int main()
{
  base *bb = new base; // private constructor not called dynamically

  getch();
  return 0;

} 

#endif

// 3 point - public constructor, private destructor and dynamic allocation -> delete using friend function

#if 0
class base
{
private:

  ~base()
  {
    cout << " I am in base destruc " << endl;
  }
protected:


public:

  base()
  {
    cout << " I am in base constr " << endl;
  }

  friend void destroy(base * ptr);
  

};


void destroy(base *ptr)
{
  delete ptr;
}


int main()
{
  {
  base *bb = new base; // TO DELETE THE OBJECT we need to write own function either static inside class or friend
  destroy(bb);
  }
  getch();
  return 0;

} 
#endif

// 4 point - public constructor, private destructor and dynamic allocation -> delete using STATIC FUNCTION
#if 0
class base
{
private:

  ~base()
  {
    cout << " I am in base destruc " << endl;
  }
protected:


public:

  base()
  {
    cout << " I am in base constr " << endl;
  }

  static void destroy(base * ptr)
  {
    delete ptr;
  }
  

};



int main()
{
  {
  base *bb = new base; // TO DELETE THE OBJECT we need to write own function either static inside class or friend
  base::destroy(bb);
  }
  getch();
  return 0;

} 
#endif

// 5 point - private destructor carried in the inheritance

#if 0
class base
{
private:
  ~base()
  {
    cout << " I am in base destruc " << endl;
  }

protected:


public:

  base()
  {
    cout << " I am in base constr " << endl;
  }


};

class derived: public base
{
private:


protected:


public:


  derived()
  {                              //        showing inaccessibilty --> because base destructor is private
    cout << " I am in derived constr " << endl;
  }

  ~derived()
  {
    cout << " I am in derived destruc " << endl;
  }
};


int main()
{
  {
  derived *dd = new derived; 

  delete dd;

  }
  getch();
  return 0;

} 
#endif

#if 0
// 6 point - private destructor carried in the inheritance
class base
{
private:


protected:
  ~base()   // if private destructore of base class defined in the protected then it follow inheritance
  {
    cout << " I am in base destruc " << endl;
  }

public:

  base()
  {
    cout << " I am in base constr " << endl;
  }


};


class derived: public base
{
private:


protected:


public:


  derived()
  {                              //        showing inaccessibilty --> because base destructor is private
    cout << " I am in derived constr " << endl;
  }

  ~derived()
  {
    cout << " I am in derived destruc " << endl;
  }
};


int main()
{
  {
  derived *dd = new derived; 

  delete dd;

  }
  getch();
  return 0;

} 
#endif

#endif