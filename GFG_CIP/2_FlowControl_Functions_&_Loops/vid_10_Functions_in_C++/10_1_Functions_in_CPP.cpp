#include<iostream>

using namespace std;

void fun()
{
    cout << "fun() called \n";
}
int getMax (int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
    
}
int main()
{
    cout << "Before calling fun() \n";
    fun();
    cout << "After calling fun() \n";
    fun();
    cout << "Max of 3 and 4 is ";
    cout << getMax(3,4) << "\n";
    return 0;
}