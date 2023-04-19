/*
1.  Class : A DATA TYPE with functions. It is a user defined datatype, Not a primitive datatype. 
    Object: VARIABLE of a class

    Example: 

    int x; 
    int-Datatype x-Variable

    Similarly,
    Class-Datatype Object-Variable. 

2. ABSTRACTION: Technique of making few things/funtionalities of a class private. 
                Hiding internal details of a Class. Only show public interface which is accessible outside the class. 
    
    Example:    Refer code. 
                TO-DO: Add an example with set and get functions and use these in main function. 

3. ENCAPSULATION:   Whole idea of creating a class. Bundling Class, Data members and Functions together. 
                    Put Related data and functions together. 
                    TO-DO: Check other sites or blogs or videos and write Definition and example again. 

4. INHERITANCE: Idea of writing common code in a Parent Class and use this Parent Class to create other Child classes which needs functionality of Parent class. 
                Reusing the code. To avoid re-writing the common code.
    Example: TO-DO - write an example Parent: Shape class - Color, width of edges, location,
                                      Child : Child Class - Rectangle, Triangle, Circle. 
             Or any other good example from internet. 

5. POLYMORPHISM: One/Same name multiple functionalities. 

    i.  Static Polymorphism. Ex: Function Overloading - Two fns with same names, one to find max of 2 and other for 3 integers. 
                            Depending upon the parameters passed to that function. With Default arguments also this can be achieved - Include in example. 
                            TO-DO: Write examples. 
    ii. Dynamic/Runtime Polymorphism. Upcoming videos. Virtual Functions may be related.

*/

//##############################################################
// Example 1: 
#include<iostream>
using namespace std;

class Complex{
    private:
        //Data Members          // Functions inside the class can only access the private members.
        int real;               // Use set or get functions to edit or fetch these details.
        int imag;               // This is called ABSTRACTION.
    public:
        // Member Functions()
        void print(){
            cout << real << "+i" << imag << endl;
        }
        Complex(int r, int i){  // Constructor: Function name is same as class name. 
            real = r;           // Constructors are Called when we create object of this class. 
            imag = i;           // Useful to Initialize variables, or Error checking. 
        }
};

int main()
{
    // Declare an Object c1 of Class Complex.
    Complex c1(10, 15);
    // Accessing member function.
    c1.print();
    return 0;
}
// ################################################################