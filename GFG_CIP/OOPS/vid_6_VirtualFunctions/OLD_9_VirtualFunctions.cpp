#include <iostream> 
using namespace std; 

class Base{
    public: 
        virtual void print(){cout << "Base \n"; }
};

class Derived : public Base{
    public: 
        void print()override{cout << "Derived \n"; } // void print()Override{cout << "Derived \n"; }
};

int main(){
    Base b; 
    Derived d; 
    b.print(); 
    d.print(); 
    Base *ptr = &d; // This changes based on the base function type is virtual or not. 
    ptr->print(); 

    return 0; 
}

/*
    * If base class function "IS NOT" virtual then we get output as:  Base, Derived, Base. 
        - Type of pointer(LHS) decides the function to be called. 
    
    * If base class function "IS" Virtual then we get output as:      Base, Derived, Derived. 
        - Type of object(RHS) decides the function to be called. 
        - aka Type of OBJECT to which pointer is pointing to decides the function to be called. 
    
    RUN-TIME_POLYMORPHISM
    * This is called FUNCTION OVER-RIDING. - Example of RUN-TIME_POLYMORPHISM
        - Derived class should have function with same name as Parent class. 
        - and the function of parent class should be VIRTUAL. 
        - Parameters/variables of both the functions should also be same. 
    
    COMPILE-TIME_POLYMORPHISM
    * In function overloading. - Example of COMPILE-TIME_POLYMORPHISM
        - We have function with same names but different input parameters. 

    * Override Keyword 
     - works from c++ 11
     - Makes code more readable. 
     - avoids errors if function names or parameters doesn't match. 
*/