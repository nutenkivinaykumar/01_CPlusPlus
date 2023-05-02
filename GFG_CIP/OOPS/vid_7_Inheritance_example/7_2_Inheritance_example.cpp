#include<iostream>
using namespace std;

class Base
{
public: // If this is private, Derived class won't be able to access "x" in print function, and we will get compiler error.
    int x;
    Base(int a) : x(a) 
    {
        cout<<"Base \n";
    }
};
class Derived : protected Base  // since it is protected inheritance, "x" will only be able to use in Derived class. 
{                               // Hence, main class won't be able to call it. 
private:
    int y;
public:
    Derived(int a, int b) : Base(a), y(b)
    {
        cout << "Derived \n";
    }
    void print()
    {
        cout << x << " " << y << '\n';
    }
};
int main()
{
    Derived d (10, 20);
    d.print();
    cout << d.x;
    return 0;
}