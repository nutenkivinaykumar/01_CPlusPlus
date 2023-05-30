/*
DECLARE
-   Function declaration should be done before the main function. 
    Purpose: 
        -   Type of Parameters
        -   Number of Parameters
        -   Return Type
    -   If number of variables in Function declaration is wrong, then even if the function Definition and call matches
        compiler will throw an error. Because Compiler will refer the Declaration which is before the function call.
DEFINE
-   Then it can be defined even after main function, if it is declared before main function.
If definition is absent we will get a LINKER ERROR.
*/

#include<iostream>
#include<cmath>
using namespace std;

int getMax(int , int ); // Variable names are not required while Declaring a function.

int main()
{   
    int a = 10, b = 20;
    cout << getMax(a,b) << endl;
    
    // Using Library functions
    {
        double a = 2, b = 4;
        cout << pow(a,b) << endl; // cmath header file contains declarations of these functions
        double x = 100;
        cout << log10(x);
    }
    return 0;
}

int getMax(int x, int y)
{
    if(x>y)
        return x;
    else 
        return y;
}