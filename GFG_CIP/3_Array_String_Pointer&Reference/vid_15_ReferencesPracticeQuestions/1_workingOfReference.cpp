#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    int &z = x; // References are bound to only once. 
    z = y;      // Hence here, z again doesn't refer to y, instead, value of y is stored in z&x, since z&x refer to same location
    z += 5;
    cout << x << ' ' << y << ' ' << z;
    return 0;
}