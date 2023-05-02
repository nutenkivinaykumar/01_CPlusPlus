/*
    Interesting Fact: 
        - A base class type reference OR pointer can refer to a derived class object. 

    APPLICATION OF VIRTUAL FUNCTIONS CONCEPT: 
    
    A Base class reference or pointer, pointing to or referring to a Derived class object:
    Example: 
        *Employee: Financial data like TDS, Salary, etc...
        * SWDeveloper *Sales_executive *SWTester * * 

        -   When are functions that do processing on all employees common data. 
        -   In this case we pass an array of all employees(different arrays containing groups of one type), 
            all the arrays are of different sizes(SWDeveloper - 10, SWTesting -5). 

        Here, make an array of pointers of employee type and these individual objects of this array point to different types of employees. 
        So if we want to print data of an employee, we can iterate throught the above array of employees and print data of individual employees. 

    

*/
#include <iostream> 
using namespace std; 


class Base{}; 
class Derived : public Base{}; 

int main(){

    Base *b = new Derived; // Pointer of Base type referring to an object of Derived type
    Derived d; 
    Base &b = &d; // Base class reference referring to a derieved class object. 

    return 0; 
}