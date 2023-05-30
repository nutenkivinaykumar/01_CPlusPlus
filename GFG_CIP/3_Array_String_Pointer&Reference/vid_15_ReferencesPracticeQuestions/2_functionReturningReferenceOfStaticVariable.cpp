/*
Here function "fun", returns a reference. 
-   its returning reference of a "Local Static Variable" x

-   We should not return reference to Non-Static Local variable. 
    *   Because, local variables exist only inside the function scope,
        once the function call is over, they don't exist.
    *   Hence, we can't modify those variables after they have been returned from function,
         since they don't exist anymore. 
*/

#include<iostream>
using namespace std;

int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    int &y = fun(); // what will happen if here we use only "int y" instead of "int &y"
    y = 20;         // Ans: in that case when "y" is assigned to 20, static "x" wont change. 
    cout << fun();
    return 0;
}

/*
-   Reference of a Local static variable should be returned from a function,
    when we need to make changes to the variable out side the function.

*/