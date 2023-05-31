/*
1. We cannot subtract one type of pointer from another type. 
2. We can only subtract similar type of pointers. 
*/

#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    int *p = a;
    cout << p << " " << *p << "\n";
    p++;
    cout << p << " " << *p << "\n";
    p--;
    cout << p << " " << *p << "\n";
    p += 2;
    cout << p << " " << *p << "\n";
    p -= 2;
    cout << p << " " << *p << "\n";
    auto p2 = p; 
    p += 3;
    cout << p << " " << *p << "\n";
    cout << p - p2; // It gives number of objects between them. Not number of bytes. 
                    // number of bytes are 12, but number of objects are 3. if each object if of 4 bytes
    return 0;
}