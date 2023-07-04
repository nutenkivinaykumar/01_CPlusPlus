#include<iostream>
using namespace std;


// Compiler fine
int main(){
    int *ptr = 0; 
    return 0; 
}

/* 
Compilation error

int main(){
    int *ptr = 10;  // This will work: int *ptr = new int(10); 
    return 0; 
}

*/

/*
Applications of NULL: 
1. For pointer with no valid memory address
2. Functions use NULL to return invalid output. (When something has gone wrong i.e. unexpected)
3. In data structures like Linked List, Trees, etc.

Some Important points: 
1. A NULL Pointer converts to bool value false. And all other pointer values convert to true. 
ex:     int *ptr = NULL; 
        if(ptr){         // HEre ptr is used as a boolean
            cout << "NOT NULL" << endl; 
        }

2. NULL can be used for any type. 
ex:     double *p1 = NULL; 
        char *p2 = NULL; 

*/
