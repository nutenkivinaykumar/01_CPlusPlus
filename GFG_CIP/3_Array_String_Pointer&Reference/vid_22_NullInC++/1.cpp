#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;  // 1. Without assigning it to null
    int can;
    cin >> can;
    if(can%2==1){
        p = new int(1);
    }
    if(p!=NULL){    // 2. Without checking if its not null
        cout << *p << '\n';
    }
    return 0;
}


/*
1. its better to follow the points used in this code. 
    a. While initializing, always assign a pointer to NULL
    b. Dereference a pointer only if its not NULL
2. How is null defined? 
    -   It is typically defined as 0 in C++
    -   example in file 2.cpp

*/