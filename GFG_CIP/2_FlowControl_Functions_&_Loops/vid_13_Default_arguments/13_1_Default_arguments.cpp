/*
Interesting Facts about Default Arguments: 
    1. All default arguments must appear at the end. 
        -   ex: void printDetails(int id, string name = "NA", string address)
            *   If we write a default argument in the middle, we will get compiler error. 
    2. Default arguments should be provided either in DECLARATION (or) in DEFINITION.
        -   If we provide it in both the places we will get a compiler error. 
        -   PREFERRED WAY is to provide in Declaration. Since, declaration is typically used for documentation. 
        

*/
#include<iostream>

using namespace std;

void printDetails(int id, string name = "NA", string address = "NA")
{
    cout << "Id: " << id << '\n';
    cout << "Name: " << name << '\n';
    cout << "Address: "<< address << '\n';
}

int main()
{
    printDetails(101, "Sandeep", "Noida");
    cout << '\n';
    printDetails(201, "Shivam");
    cout << '\n';
    printDetails(301);
    return 0;
}
