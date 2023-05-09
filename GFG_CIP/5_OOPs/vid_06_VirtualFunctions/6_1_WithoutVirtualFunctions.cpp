/*
    -   Here instead of a print function, we can consider a real world example of previous code, 
        Raise salary function for all employees. Both Derived and Base class has same function(with same signature). 
    -   Base class will have Standard formula for all employees
    -   Derived class will have domain specific hike for each type of employees.(Different for each role)


    In the below example:
    -   So when we pass array of pointer of employee type(Base class), pointing to a derived class and call raise salary function(print function). 
    -   We expect the raise salary function(print function), of objects to which these pointers are pointing are expected to be called. 

*/
#include<iostream>
using namespace std;

class Base
{
public:
    void print()
    {
        cout << "In Base \n";
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "In Derived \n";
    }
};
int main()
{
    Base b;
    b.print();
    Derived d;
    d.print();
    Base *bp = &d;
    bp -> print();
    return 0;
}

/* 
=================================================================
Output: 

In Base
In Derived
In Base                          // But we expect derived here. 
=================================================================

Here the "type of pointer" is deciding instead of a "Object to which its pointing".


* the type of pointer should not decide the function to be called. 
* It should be decided by the object to which it is pointing to
This can be achieved using Virtual pointers. 
*/

