/* 
Watch again
*/

#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    int *p = a; // but, arr = ptr, wont work // like ptr++, arr++ is not allowed
    cout << sizeof(a)  << endl;
    cout << sizeof(p)  << endl;
    cout << *(a+2) << endl; // this happens when we call "arr[2]"
    cout << p[2] << endl;
    return 0;
}