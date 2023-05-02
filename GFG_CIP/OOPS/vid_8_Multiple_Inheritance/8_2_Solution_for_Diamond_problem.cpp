/* 
Diamond problem: 

Solution: 
    -   Using virtual Keyword
    -   When we create an object of D, constructor of A is called exactly once. 
*/

#include<iostream>
using namespace std;

class A{
public:
    int x = 1;
};
class B : virtual public A 
{   public:
    int x = 10;};
class C : virtual public A 
{   public:
    int x = 20;};
class D : public B, public C 
{   public:
    int x = 30;};

int main()
{
    D d;
    cout << d.x;
    return 0;
}

/*
Output: 
    30
*/