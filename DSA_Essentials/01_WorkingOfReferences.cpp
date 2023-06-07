/*
1.  Reference creates another name for a variable
2.  Syntax: 
        >   int x = 10; 
        >   int &y = x; // here 'y' is a reference variable, referring to 'x'
        >   // In this example Syntax was demonstrated using int type, but its the same for vector, string, char, struct, class, etc..
3.  Reference variable should be on left hand side

*/

#include <iostream>
#include <vector>
using namespace std;

void swap(int &x, int &y){
    int temp = x; 
    x = y; 
    y = temp; 
}

void print(vector<int>&v1){  // here v1 is copy of the vector v in main function. 
    for(auto &i:v1){
        cout << i << " "; 
    }
}

int main(){
    int x = 10, y = 20; 
    swap(x, y); 
    cout << x << " " << y << endl; 

    ///////////////////////////////////////

    vector<int> v{1,2,3,4}; 
    for(auto &i:v){         // Here if 'i' is reference to each element in vector, for every iteration, to avoid data copy. 
        cout << i << " "; 

    }
    
    //////////////////////////////////////

    print(v); 

    return 0; 
}