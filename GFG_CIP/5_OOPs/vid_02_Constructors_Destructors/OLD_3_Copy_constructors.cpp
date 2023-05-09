/*
Syntax of User-defined Copy Constructor: class_name(const class_name &old_object);

class A  
{  
    A(A &x) //  copy constructor.  
   {  
       // copyconstructor.  
   }  
}   

*/

// ===========================================================================

// Program of copy constructor. 
#include <iostream>  
using namespace std;  
class A  
{  
   public:  
    int x;  
    A(int a)                // parameterized constructor.  
    {  
      x=a;  
    }  
    A(A &i)               // copy constructor  
    {  
        x = i.x;  
    }  
};  

// =============================================================================
// Shallow copy Constructor
class Demo_S  
{  
    int a;  
    int b;  
    int *p;  
    public: 
    Demo_S()  
    {  
        p=new int;  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  
};  

// ==============================================================
// Deep copy Constructor. 

class Demo  
{  
    public:  
    int a;  
    int b;  
    int *p;  
  
    Demo()  
    {  
        p=new int;  
    }  
    Demo(Demo &d)  
    {  
        a = d.a;  
        b = d.b;  
        p = new int;  
        *p = *(d.p);  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  
};  
// =====================================================================
// gfg
class Test{
    int *ptr; 
public: 
    Test (int x){
        ptr = new int(x); 
    }
    Test (const Test &t){
        int val = *(t.ptr); 
        ptr = new int(val); 
    }
    void set (int x){
        *ptr = x; 
    }
    void print(){
        cout << *ptr << " " ; 
    }
};

// ======================================================================

int main()  
{
    A a1(20);               // Calling the parameterized constructor.
    A a2(a1);                //  Calling the copy constructor.  
    cout<<a2.x;  
    // ###############################################################
    Demo_S d11;  
    d11.setdata(4,5,7);  
    Demo_S d22 = d11;  
    d22.showdata(); 
    // ###############################################################
    Demo d1; 
    d1.setdata(4,5,7);  
    Demo d2 = d1;  
    d2.showdata();  

    return 0;  
}  