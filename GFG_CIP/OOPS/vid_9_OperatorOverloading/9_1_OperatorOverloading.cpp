/*
Operator Overloading: Allows to overload operators for User defined Classes. 
    Definition: 
        -   We need to Overload Operators use them on User defined Data Types
        -   It is different from FUNCTION OVERLOADING.
    There are 2 ways to Overload Operators. 
    i.  Make a function inside the class(Member function).
    ii. Make a Global function.  

IMP POINTS: 
    -   Precedence, Associativity and Arity doesn't change when we overload operators. 
    -   We cannot overload all operators. C++ standard doesn't allow. 
        Dot(.), Scope Resolution(::), Conditional Operator(?:), and sizeof Operator cant be overloaded. 
    -   Assignment Operator. 
        If we don't write Assignment operator overload function, 
        compiler creates it by default to support Cases like in below example. 
        That does member by member copy from one object to another object.
        Ex: 
            Test t1, t2; 
            t1 = t2; 
    -   When do we need to write our own assignment operator: Same as COPY CONSTRUCTOR RULE. 
        -   Default assignment operator does SHALLOW COPY. 
        -   So, if the class has Dynamically allocated memory, or Pointers which point to some othe Dynamically Allocated memory
            in these cases we need to do DEEP COPY by writing our own Assignment operator, which allocates a NEW DYNAMIC MEMORY and copies data of the other class. 
        
General Rule: 
    -   If the class has Constructor that Dynamically allocates memory, and we have a Pointer in the class that points to the Dynamically allocated memory, 
        then 
            i.  we should write Destructor to make sure there is no Memory Leak. 
            ii. We should write Copy constructor to make sure SHALLOW COPY doesn't happen. 
            iii.We should write our own Assignment operator(To avoid SHALLOW COPY). 

*/

#include<iostream>
using namespace std;

class Complex{
private:
    int r, i;
public:
    Complex(int r = 0, int i = 0){
        this->r = r;
        this->i = i;
    }
    Complex operator + (const Complex &c){
        Complex ans;
        ans.r = this->r + c.r;
        ans.i = this->i + c.i;
        return ans;
    } 
    void print(){
        cout << this->r << " + " << this->i << "i \n";
    }
};
int main()
{
    Complex c1(2,3), c2(3,4);
    auto sum = c1 + c2;
    sum.print();
    return 0;
}