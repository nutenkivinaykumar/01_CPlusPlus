/*
1.  It is usefull to chain functions. 
2.  To set x and y in the same Line no: , setx should return object of point type and
    object must be same object. 
    - So we use this pointer here. Line no: 

3. Example for chaining: cout. 

4.  Advantages of This Pointer: 
    - Making parameter names more meaningful. We can have same parameter name x and y, and access them using this->x and this->y
    - Chain functions 
    - 

5. * This pointer is a constant pointer. If we try to change we will get a compiler error. 
    Example: To-Do
TO-DO: 
* NOTES: MAKE A CPP FILE WITH FUNCTIONS RETURNING * AND &, int *fun1(), int &fun2()
* Search for Definition and write down application of this pointers. Accessing object members using this -> x and this ->y
*/

#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int x, int y){
            this -> x = x;
            this -> y = y;
        } 
        Point &setX(int x){
            this -> x = x;
            return *this;
        }
        Point &setY(int y){ // here returning *this means returning the same object. 
            this -> y = y;  // and we get the return value as reference. so that we can get hold of the same object and sety also is applied on the same object.
            return *this;
        }
        void print(){
            cout << "Printing x and y of the object: " << x << " " << y << endl; 
        }
};

int main()
{
    Point p1(10, 10);
    p1.print();  
    p1.setX(5).setY(5);
    p1.print();  
    return 0;
}