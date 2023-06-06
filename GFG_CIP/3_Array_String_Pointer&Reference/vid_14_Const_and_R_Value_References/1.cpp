/*
-   References which we have discussed so far are "L-value References"
    -   and the const references that we have discussed are "Const L-value references"

-   Const references and R-Value reference (&&) are used for this purpose. 
    *   ex in line no 23 and 24
    * instead of "const string &" or "string &&", if there was only "string &", then it would throw an error. 
*/
#include<iostream>
using namespace std;

void print(const string &s)
{
    cout << s << '\n';
    
    // Here we cannot edit the string 's' as below, because it's passed as a constant string
    // s = "Hi, " + s; // this would give an error. 
    // Hence we have R-Value reference && as below. 
}
void editAndPrint(string &&s)
{
    s = "Hi, " + s;
    cout << s << "\n";
}
int main()
{
    print("Welcome to GeeksforGeeks");
    editAndPrint("Welcome to GeeksforGeeks");
    return 0;
}

// Another example is as below

/*
int &x = 3; // invalid
const int &x = 3; // valid
int &&x = 3; // valid

string &s = "gfg"; // invalid
const string &s = "gfg"; // valid
string &&s = "gfg"; // valid

*/
