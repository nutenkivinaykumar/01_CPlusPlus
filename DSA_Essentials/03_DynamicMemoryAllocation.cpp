/*
https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

1.  Syntax to use new operator:
    -   pointer-variable = new data-type;

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// Pointer initialized with NULL
// Then request memory for the variable
>   int *p = NULL; 
>   p = new int;   

            OR

// Combine declaration of pointer 
// and their assignment
>   int *p = new int; 
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

3.  Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of type data type. 

    >   pointer-variable = new data-type[size];
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

4.  delete operator
    -   Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language. 

Syntax: 

    // Release memory pointed by pointer-variable
    delete pointer-variable;
    
    // Release block of memory 
    // pointed by pointer-variable
    delete[] pointer-variable;  
*/

#include <iostream>
using namespace std; 

// Custom data type
struct cust
{
    int p;
    cust(int q) : p(q) {}
    cust() = default;
    //cust& operator=(const cust& that) = default;
};

int main(){

    // pointer-variable = new data-type(value); For custom data types, a constructor is required (with the data type as input) for initializing the value.
    int *ptr = new int(5); 

    cout << *ptr << endl; // Output: 5

    int *p = new int[10];

    ///////////////////////////////////////////////////////////////////////////////////////////

    // Works fine, doesn’t require constructor
    cust* var1 = new cust;
 
    //OR
 
    // Works fine, doesn’t require constructor
    var1 = new cust();
 
    // Notice error if you comment this line
    cust* var = new cust(25);
    return 0;

}

/*
For custom data types, a constructor is required (with the data type as input) for initializing the value.


*/