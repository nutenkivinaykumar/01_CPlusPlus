// Destructor
/*
*Destruction order: 
    - When we have multiple objects in the same scope, they are destructed in reverse order of their creation. 
* Destructors are called when object goes out of the scope. 
* Destructors are called when we do delete on an object. 
* We need to write a destructor when we are dynamically allocation memory in the class
    - If we don't write destructor that memory will never be deallocated/deleted.
    - Default destructor doesn't take care of dynamic memory allocation. 
    - General Rule: 
        If we have a dynamically allocated memory in the constructor then its always recommended to write a destructor. 
*/
#include <iostream> 
using namespace std; 

class Test{
public: 
    Test() {cout << "Constructor called " << endl;}
    ~Test() {cout << "Destructor called " << endl;}
};

class Test1{
    int x; 
public: 
    Test1 (int i): x(i){
        cout << "Const " << x << endl; 
    }
    ~Test1 (){
        cout << "Dest " << x << endl; 
    }
}; 
int main(){
    {
        Test t1;  
    }
    Test t; 
    Test1 t3(10);
    Test1 t4(20); 
    return 0; 
}



// Appendix: 
// To-Do: TOPIC: Virtual Destructor 

// NOTES:
// 1. If we delete child class object through a pointer of parent class then it is undefined behaviour, 
//    if parent class doesn't have virtual destructor?
// 2. If we fail to declare destructor as virtual in parent class then we endup having memory leak.
