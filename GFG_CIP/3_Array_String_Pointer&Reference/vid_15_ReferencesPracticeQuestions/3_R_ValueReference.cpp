#include<iostream>
using namespace std;


int main()
{
    string s1 = "GFG ", s2 = "Courses";
    string &&s3 = s1 + s2;
    s3 = "Welcome to " + s3; // since, s3 is a R-Value reference, this code works fine. 
    cout << s3 << endl;
    return 0;
}