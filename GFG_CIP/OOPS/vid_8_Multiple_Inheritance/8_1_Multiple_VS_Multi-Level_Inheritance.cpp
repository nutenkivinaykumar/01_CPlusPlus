/*
    A                              A    B
    |                              ||  ||
    B                               \\ //
    |                                 C      
    C                               

Multi-Level Inheritance       Multiple Inheritance
____________________________________________________________________________________
                    DIAMOND PROBLEM
    -   In this example when we create a Object of class D, and try to access 'x', Compiler throws error("D::x" is ambiguous). 
        since the members of class A are inherited through 2 paths. 
        i.e. the object of class D has 2 copies of 'x'. 
        One is inherited through class B and another through class C.
        


*/
#include<iostream>
using namespace std;

class A{
public:
    int x = 1;
};
class B : public A 
{ };
class C : public A 
{ };
class D : public B, public C // Since B is first, constructor of B is called first, then second C's constructor, and then D's constructor. Consider A is not present at all for this line. 
{ };

int main()
{
    D d;
    cout << d.x;
    return 0;
}

