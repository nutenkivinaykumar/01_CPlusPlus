/*
    Interesting Fact: 
        - A base class type reference OR pointer can refer to a derived class object. 
*/
#include <iostream> 
using namespace std; 

class Base {}; 
class Derived : public Base{}; 

int main(){

    // Example for Base class refering to Derived class. 
    Base *b = new Derived; // Pointer of Base type refers to an object of Derived type. 
    
    Derived d; 
    Base &b = d; // Base class reference pointing to derived class object. 
    
    return 0; 
}

class Employee{
    public: 
        void print(){ cout << "Base \n"; }
}; 

class Developer : public Employee{
    public: 
        void print(){ cout << "Derived \n"; }
}; 

int main1(){
    Employee e; 
    Developer d; 
    e.print(); 
    d.print(); 

    Employee *ptr = &d; 
    ptr->print(); 
    return 0; 

}