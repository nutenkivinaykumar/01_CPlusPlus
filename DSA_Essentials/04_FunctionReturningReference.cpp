/*
1.  When a function returns reference, then
    a.  the return variable must be LOCAL STATIC VARIABLE
        -   Local static Variable: is initialized only once, and it stays in memory even after scope in
            which it is present is exited(even if the function is exited, this remains in memory.)

*/

#include <iostream>
using namespace std; 

int &fun(){                 // This means that this FUNCTION RETURNS REFERENCE. 
    static int x = 10; 
    return x;               // And this is a LOCAL STATIC VARIABLE, that is being returned. 
}

int main(){
    int &z = fun();         // Here, 'z' becomes an alias to 'x', that is being returned from 'fun()'
                            // Return value is assigned to a reference 'z'
    cout << fun() << " ";   // Output: 10
    z = 30;                 // When 'z' is changed 'x' is also changed.
    cout << fun();          // Output: 30
    return 0; 
}

/*
WE SHOULD NEVER RETURN REFERENCE TO A NON STATIC LOCAL VARIABLE
*/