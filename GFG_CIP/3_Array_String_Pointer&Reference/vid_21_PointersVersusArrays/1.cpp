/* 
To-Do: Watch again
*/

#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};// printing: a, &a, &(a[0]) :- all the three return same address. but int *p3 = &a[0]; - valid // int *p3 = a; - valid // int *p3 = &a; - NotValid //
                           // Because, a and &(a[0]) return address of first element only, whereas &a returns to address of 3 elements(length of that array) starting from first elements address.
    int *p = a; // but, arr = ptr, wont work // like ptr++, arr++ is not allowed
    cout << sizeof(a)  << endl;
    cout << sizeof(p)  << endl;
    cout << *(a+2) << endl; // this happens when we call "arr[2]"
    cout << p[2] << endl;
    return 0;
}
