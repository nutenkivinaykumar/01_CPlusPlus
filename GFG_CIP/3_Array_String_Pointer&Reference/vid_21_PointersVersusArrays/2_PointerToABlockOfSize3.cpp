#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};// printing: a, &a, &(a[0]) :- all the three return same address. but int *p3 = &a[0]; - valid // int *p3 = a; - valid // int *p3 = &a; - NotValid //
                           // Because, a and &(a[0]) return address of first element only, whereas &a returns to address of 3 elements(length of that array) starting from first elements address.
    int *p1 = a;
    int (*p2)[3] = &a; // here this means Pointer to a block of size 3 => p2 which stores array a's address.
                        // here if brackets are removed, i.e, int (*p2)[3] = &a; => int *p2[3], then RHS is an array of pointers. 
    cout << *p1 << ' ' << **p2; // if we do *p2, we will get address of "a", which is address of 10, a's first elements address
    return 0;
}

/*
Note: 
    
1. int *p2 = &a; would not compile. 
    -   Because, this is a variable of type, 3 blocks of memory. and lhs is a pointer of int* type
2. int *p2[3]; would mean an array of pointers of size 3. 

-   If we do p1++, it will move one block a head
-   But, if we do p2++, it will move 3 blocks a head. since, it means pointer of a block of size 3. 
*/