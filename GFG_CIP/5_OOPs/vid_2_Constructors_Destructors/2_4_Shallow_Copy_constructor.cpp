/* 
GFG video

Copy Constructor: 
- Copy constructors are special functions which are called when an object is created from an Existing object. 


*/  
 
#include<iostream>
using namespace std;

class Test{
    int *ptr;
    public:
        Test(int x){
            ptr = new int(x); 
        }
        void set(int x){
            *ptr = x;
        }
        void print(){
            cout << *ptr << " ";
        }
};

int main()
{
    Test t1(10);
    Test t2(t1);// Creating t2 from t1 - "Test t2=t1;" This is a Copy constructor call. 
                /*
                But note that the above is not same if written as below
                Test t2; 
                t2 = t1; // This is not a copy constructor call. 

                code in this comment will 
                i. first call the default constructor
                ii. Then call the assignment operator. 
                */

    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}

/*
Output: 
20 20

Reason: Shallow copy. 
- When we have pointers inside the class, then addresses are copied, and pointer values are copied. 
- New memory is not allocated. 
- So changing value in one object(rhs t1) will change the value in other object(lhs t2) also. 
*/