/*
https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

Syntax to use new operator:
-   pointer-variable = new data-type;
____________________________________________

// Pointer initialized with NULL
// Then request memory for the variable
int *p = NULL; 
p = new int;   

            OR

// Combine declaration of pointer 
// and their assignment
int *p = new int; 
____________________________________________

Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of type data type. 

pointer-variable = new data-type[size];
_______________________________________________________

delete operator
Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language. 
Syntax: 

// Release memory pointed by pointer-variable
delete pointer-variable;

// Release block of memory 
// pointed by pointer-variable
delete[] pointer-variable;  
*/

#include <iostream>
using namespace std; 

int main(){

    // pointer-variable = new data-type(value); For custom data types, a constructor is required (with the data type as input) for initializing the value.
    int *ptr = new int(5); 

    cout << *ptr << endl; // Output: 5

    int *p = new int[10];

}

