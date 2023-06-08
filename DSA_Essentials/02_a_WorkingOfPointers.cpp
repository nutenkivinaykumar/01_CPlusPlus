/*
-   Pointer variable stores address of other variable.
    >   int x = 10; 
    >   int *ptr = &x;
-   Purpose of '&' operator anywhere other than Reference declaration is to get address of the variable.  
-   // In this example Syntax was demonstrated using int type, but its the same for string, char, struct, class, etc..
    >   int *ptr; int* ptr; double *ptr_d; string *ptr_s; 

1. * is used to create a pointer variable
2. * is used to get value at an address. (dereference)
3. & is used to created a reference(another name for a variable)
4. & is used to get address of a variable. 

*/

#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2){    // To receive address, we need pointer variables. 

    int temp; 
    temp = *ptr1;                   // Using dereferencing operators to change values
    *ptr1 = *ptr2; 
    *ptr2 = temp; 
}

int main(){

    int x = 10; 
    cout << (&x);   // Prints address of variable 'x' from memory

    ///////////////////////////////////////////////////////////////

    cout << (*(&x)); // Prints 10, * = Dereferencing Operator, which dereferences the value at address of x given by &

    ///////////////////////////////////////////////////////////////

    int x1 = 11; 
    int *ptr = &x1;

    cout << *ptr << " "; // output: 11
    cout << ptr << " ";  // output: 0x1234 => address of 11

    ///////////////////////////////////////////////////////////////

    int y1 = 10; 
    int y2 = 20; 

    swap(&y1, &y2); // Passing addresses of variables. 

}