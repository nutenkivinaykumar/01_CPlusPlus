#include<iostream>
using namespace std;

class Base
{
public:
    virtual void print()
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
Output: 
In Base 
In Derived
In Derived

This is called function overriding. Which is different from function overloading. 
function overriding runtime polymorphism. Function overloading compile time polymorphism. 


To implement virtual functions extra work is done by CPU, more CPU cycles. because of VPTR and Vtable
Unless we are working in a VERY TIME RESTRICTED ENVIRONMENT, we need not worry and use Virtual functions 
*/