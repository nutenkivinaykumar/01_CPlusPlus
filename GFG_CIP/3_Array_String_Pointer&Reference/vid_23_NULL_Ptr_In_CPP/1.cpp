/*
1. Added in C++ 11 as replacement of NULL

Problems with NULL: 
2. Typically NULL is defined as a macro, with integer value as 0. (In C++)
3. In C it is defined differently. 
4. int x = NULL; 
    -   The above line of code is allowed. Which should not be ideally. 

Advantage of nullptr:
5. int x = nullptr; 
    - The above line is not allowed. Because, nullptr is of type nullptr_t. 
    - nullptr is different. Its not a simple macro as NULL
6. Like NULL, nullptr can also be used when we need to write conditions based on boolean. 
*/

#include<iostream>
using namespace std;

void f (int x)
{
    cout << "Integer" << '\n';
}
void f (int *ptr)
{
    cout << "Pointer" << '\n';
}
int main()
{
    // f(NULL); 
                    /*  Since it is just a macro expansion, we get a compiler error: Ambiguous call. 
                        
                        Pointer function was supposed to be called. but since NULL is a pointer and zero when expanded. 
                        Since, NULL can make a call to both the functions, we get the Compiler error. 
                    */
    f(0);           // Integer function
    f(nullptr);     // Pointer function
    return 0;
}

/*
Even in the places where the functions are overloaded like above, nullptr has advantage over NULL
*/