#include<iostream>
using namespace std;

void fun(int x){
    x += 10;
}
void fun(int *p){
    *p += 10;
}
void fun(string *p){
    cout << *p;
}
void fun(int &x){
    // To-do:  Finish this example also. 
}
int main()
{
    int x = 10;
    fun(x);
    cout << x << '\n';
    fun(&x);
    cout << x << '\n';
    
    string s = "abcd";
    fun(&s);
    return 0;
}
