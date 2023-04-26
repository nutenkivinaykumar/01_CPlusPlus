/*

This Pointer: 
    C++ compiler passes a special pointer "This Pointer" which refers to the object on which you are calling this function . 

* It is usefull to chain functions. 
* This pointer is a constant pointer. If we try to change we will get a compiler error. 
    Example: To-Do

TO-DO: 
* NOTES: MAKE A CPP FILE WITH FUNCTIONS RETURNING * AND &, int *fun1(), int &fun2()
* Search for Definition and write down application of this pointers. Accessing object members using this -> x and this ->y
*/
#include <iostream> 
using namespace std; 

class Point{
    int x, y; 
public: 
    Point (int x1, int y1){
        x = x1; // this -> x = x1; Internally compiler converts these lines as this. 
        y = y1; // this -> y = y1; 
    }
    // OR 
    // to avoid name collision we can write it as below. 
    Point (int x, int y){
        this -> x = x; 
        this -> y = y; 
    }
    // Chaining
    Point &setx(int x){ // It should return an object of type point only. 
        this -> x = x; 
        return *this; 
    }
    Point &sety(int y){ // here returning *this means returning the same object. 
        this -> y = y;  // and we get the return value as reference. so that we can get hold of the same object and sety also is applied on the same object.  
        return *this; 
    }
}; 

int main(){
    Point p1(10,20), p2(5,5); 

    Point p2(10,10); 
    p1.setx(5).sety(5); // (p1.setx(5)).sety(5); 
    return 0; 
}