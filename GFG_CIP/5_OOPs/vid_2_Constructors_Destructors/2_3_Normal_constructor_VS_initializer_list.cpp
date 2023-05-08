/*
1. Example to demonstrate Advantage of Initializer list over Normal constructor, in terms of performance. 
Doubts: 
Line no: 26, 28, 29, 31 || Why cant I add print statements in line no 29/31? 
*/

#include<iostream>
using namespace std;

class Test{
    public:
        Test(){cout << "Default\n"; }
        Test(int x){cout << "Parameterised\n"; }
};
//////////////////////////////////////////////////////////
// Without Initializer list
class Main{
    Test t;
    public:
        Main(){
            t=Test(10);
        }
};

//////////////////////////////////////////////////////////
// With Initializer list - Why default constructor is not being called in line no 28? 
class Main1{
    Test t;
    // std::cout << " why is default not being printed for the above line" << endl;
    public:
    // std::cout << " why is default not being printed for the above line" << endl;
        Main1(): t(10){
            
        }
};
//////////////////////////////////////////////////////////

int main()
{
    // Without Initializer list
    Main m;

    cout << " &=========================================&" << endl; 

    // With Initializer list
    Main1 m1; 

    return 0;
}

/*
Output: 

Default
Parameterised
 &=========================================&
Parameterised

*/