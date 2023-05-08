/*
Points to be noted: 
    -   When we create an object of Derived class, it first calls the Base class constructor, 
        then it calls the Derived class constructor. 
    -   If we don't call Base class constructor explicitly, then Default constructor of the 
        Base class is called, a constructor that doesn't take any parameters. 
    -   If the Base class doesn't have any default constructor(Because of having any other parameterized constructor),
        then we get compiler error. 
    -   To fix this we explicitly call the Base class constructor with parameters using INITIALIZER LIST. 

*/
#include<iostream>
using namespace std;

class Base
{
protected: 
    int x; 
public:
    Base(int a) : x(a) 
    {
        cout<<"Base \n";
    }
};
class Derived : public Base
{
private:
    int y;
public:
    Derived(int a, int b) : Base(a), y(b) // Since Base is also initialized using initializer list, there is not error this time. 
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
    return 0;
}

/*
Output: 

Base
Derived
10 20
*/