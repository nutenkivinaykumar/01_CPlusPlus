/*
To avoid MEMORY LEAK
*/

#include <iostream>
using namespace std; 

void releaseconn(int *ptr){     // If the address/Memory pass to this function is a DYNAMICALLY ALLOCATED one, then this function will delete it. 
    delete ptr; 
}

int *createconn(){              // This function will ALLOCATE MEMORY DYNAMICALLY, and return that pointer(which stores Dynamically  Allocated Address/Memory)
    int *ptr = new int; 
    return ptr; 
}

int main(){
    
    while (1){
        int *ptr = createconn(); 

        // do some work

        releaseconn(ptr); 
    }
}