/*
This program will generate compiler error as mentioned below. 

Reason: 
    -   Here in this Example Derived class doesn't call any constructor of Base class. 
    *   When we construct an object of Derived class, Base class is also a part of 
        it, Which means Base class members should also be initialized. 
    -   Here in Derived class we didn't call any Base class constructor. 
    *   If we Don't call Base class constructor explicitly in Derived class, compiler tries
        to call Default constructor of the Base class. 
    -   But, in this example since we have made our own parameterized constructor in Base class, 
        compiler doesn't create a Default constructor in the Base class. 
-   Hence, by default when Derived class tries to call a Default Base class constructor without any parameters,
    since it is not present, we get compiler error.

Solution: 
    -   To fix this, we need to call parameterized constructor of the Base class while creating a Derived class object. 
    -   Using Initializer list we can do this. 
    - Solution is in next example. 

    



*/
#include <iostream> 
using namespace std; 

class Base{ // This class doesn't have a constructor, which can be called without Parameters, since only Parameterized constructor is written. 
    protected: 
        int x; 
    public: 
        Base(int a) : x(a) { cout << "Base \n"; }
}; 

class Derived : public Base {
    private: 
        int y; 
    public: 
        Derived (int b) : y(b) { cout << "Derived \n"; } // ERROR: no default constructor exists for class "Base"
        void print() { cout << x << " " << y << endl; }
};

int main(){
    Derived d(10); 
    d.print(); 
    return 0; 
}