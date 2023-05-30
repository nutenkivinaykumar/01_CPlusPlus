/*
Problems with Normal loop variable: 
    1. Cannot change elements
    2. Performance issues, since we are unable to use & to take elements as reference. 
        a. changes won't be reflected if we dont pass elements as reference. 
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    for(int &x : arr)  // to avoid copy of elements, we can use references.
        x += 2;
    for(int x : arr)   // for(auto x : arr) // here auto can also be used
        cout << x << ' ' ;
    cout << '\n';
    string ar[] = {"GFG", "C++ Course", "learning"};
    for(const string &s: ar)
        cout << s << '\n';
    return 0;
}