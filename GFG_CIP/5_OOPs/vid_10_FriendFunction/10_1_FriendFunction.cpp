/*
FRIEND FUNCTION AND FRIEND CLASS IN C++
    -   A class(class A) in C++ can specify another class or a function(fun) as Friend of it. 
    -   Then function fun can access all PRIVATE AND PROTECTED MEMBERS of class A. 

*   It is considered against Encapsulation/Standard Object oriented programming practices. 
*   Most languages like Java, doesn't support FRIEND CLASS & FRIEND FUNCTION

Note: 
    -   In this example we are showing Function of class Printer as FRIEND. 
    -   Similarly, We can have GLOBAL functions as a FRIEND
*/

#include<iostream>
using namespace std;

class Employee;

class Printer{
public:
    void printEmp(const Employee & e);  
};

class Employee{
private:
    int id;
    string name;
public:
    friend void Printer :: printEmp(const Employee & e); // Using FRIEND KEYWORD,this class has mentioned function printEmp as FRIEND
    Employee(int i, string n) : id(i), name(n){}
};

void Printer::printEmp(const Employee & e){ // Here we are accessing PRIVATE DATA MEMBERS OF class Employee. 
    cout << e.id << ' ' << e.name << '\n';
}

int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}