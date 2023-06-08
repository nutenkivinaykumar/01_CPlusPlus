/*
1.  For a function to return a pointer, this pointer must be storing address(MEMORY) that is DYNAMICALLY ALLOCATED. 
*/

#include <iostream> 
using namespace std; 

// WRONG WAY
int *fun(){         // This function is returning a Pointer 'ptr', which is storing address of 'a', which gets destroyed as soon as this function is returned OR goes out of scope. 
    int a = 10;     // Hence THIS IS NOT RECOMMENDED. 
    int *ptr = &a; 
    return ptr; 
}

// CORRECT WAY
int *fun1(){        // This function is returning a Pointer 'ptr1', which is storing address(MEMORY) which has been ALLOCATED DYNAMICALLY
    int *ptr1 = new int; 
    *ptr1 = 10; 
    return ptr1; 
}

int main(){
    
    cout << *fun();     // Output: 10, from address 0x1234  -   This address is deleted. 
    cout << *fun1();    // Output: 10, from address 0xd123  -   This address is still not deleted. This can be used as below

    int *ptr3 = fun1(); 
    delete ptr3;        // Deleting the DYNAMICALLY  ALLOCATED MEMORY IN function 'fun1'
    
    return 0; 
}