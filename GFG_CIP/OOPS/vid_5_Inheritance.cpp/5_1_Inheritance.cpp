/*
    INHERITANCE AND VIRTUAL FUNCTIONS IN CPP
    1. Access specifier
        a. Public
            - Accessible anywhere outside the class. 
        b. Private
            - Not accessible at all outside the class. 
        c. Protected
            - Its not accessible outside the class EXCEPT the inherited classes(The classes which are inherited from this class.)
            - They are accessible within the class and the Classes which are inherited from the base class. 
    * "Inherited classes" - Also called as "Sub Classes"
    * "Base Class" - Also called as "Super Class" 
    2. Inheritance access: 
        - public: transparent filter => protected and public of bass class remain as they are. 
        - protected: pvt in parent are pvt here; public and protected will be protected
        - private: everything from parent class will be private here.
    * 
*/
#include <iostream> 
using namespace std; 

class Person{
    protected: 
        string name; 
        int id; 
}; 

class Student: public Person{ 
    private:
        int marks; 
    public: 
        void print(){
            cout << "name: " << id << " " << marks << endl; 
        }
}; 
