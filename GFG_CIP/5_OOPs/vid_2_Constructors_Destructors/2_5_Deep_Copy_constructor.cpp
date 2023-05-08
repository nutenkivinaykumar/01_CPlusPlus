// GFG video 
// Deep Copy constructor. 

#include<iostream>
using namespace std;

class Test{
    int *ptr;
    public:
        Test(int x){
            ptr = new int(x); 
        }
        Test(const Test &t){
            int val = *(t.ptr); // To-Do: refer dynamic memory allocation. 
            ptr = new int (val); // Creating a new memory location 
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
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}

/*
Output: 

10 20 
*/