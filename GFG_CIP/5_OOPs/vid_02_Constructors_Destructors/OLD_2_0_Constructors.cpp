//CPP NUTS
/*
Constructor are of 3 types in cpp
1. Default
2. Parameterized
3. Copy Constructor

*/

#include <iostream> 
using namespace std; 

class Point{
    double x; 
    double y;
    public: 
    Point(){ x = 0; y = 0; cout << "Default Called" << endl;  }
    Point(double X, double Y){ x = X; y = Y; cout << "Parameterized called" << endl; }
    Point(const Point& rhs){ x = rhs.x; y = rhs.y; cout << "Copy Constructor called" << endl; }

    //getters
    double getx(){ return x; }
    double gety(){ return y; }
};

int main(){
    Point p1; 
    Point p2(1.3, 3.4); 
    Point p3=p1; // Or "Point p3(p1);" p1 goes as a parameter for copy constructor in rhs. 
                 // due to & rhs wont be created and rhs will refer to p1
                 // If & is not used then new object of Point which is rhs will be created in copy constructor. 


    cout << p3.getx() << endl; 
    cout << p3.gety() << endl; 

    return 0; 
    
}

/*
Doubt: 

Point& rhs == Point &rhs ??
*/ 