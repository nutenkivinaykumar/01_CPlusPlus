/*
FRIEND CLASS. 

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
    friend class Printer;   // Declaring class Printer AS FRIEND of class Employee.
                            // => all functions inside the Printer class has access to  private and protected datamembers of Employee class.
    Employee(int i, string n) : id(i), name(n){} 
};

void Printer::printEmp(const Employee & e){
    cout << e.id << ' ' << e.name << '\n'; // Functions of Printer class accessing private data members of Employee class
}

int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}

/*
More about Friendship in C++

    -   "Granted", not taken.   i.e. a class specifies that these are my friends. 
    -   "Not Mutual".           i.e. if a class A is a friend of B, it doesn't mean that B is friend of A. 
    -   "NOT Transitive".       i.e. if "A is friend of B", "B is friend of C", then "A is NOT FRIEND of C".
    -   "NOT Inherited".        i.e. if Parent class is friend, then Inherited child class Doesn't become Friend unless we specify it. 

*/