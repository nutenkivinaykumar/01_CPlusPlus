#include<iostream>
using namespace std;

void f(int a[]) // Here, "int arr[]" == "int *arr"; // it's equal to pointer
{
    int n = sizeof(a)/sizeof(int); // we should never use "sizeof(a)" where "a" is an array, to find length of an array. 
                                    //If done so, we will get size of pointer. 
                                    // ex: if we try 
    cout << sizeof(a) << "***" << sizeof(int) << endl;// OP: 8**4
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
void f(int a[], int N) // Hence, whenever we pass array, we should also pass its length
{
    int n = N;
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    f(a);
    f(a,n);
    return 0;
}

/* 
Qn:     Why does C or C++ pass array as a pointer of first element? 
Ans:    To avoid copying whole array. and imporve efficiency

*/