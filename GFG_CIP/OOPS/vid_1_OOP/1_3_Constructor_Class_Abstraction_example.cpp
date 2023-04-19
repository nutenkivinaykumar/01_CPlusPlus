/*Using a constructor to initialize the data members. */
#include <iostream>
using namespace std; 

class PropertiesOfShapes{
    private: 
        int length, breadth; 
    
    public: 
        
        PropertiesOfShapes(int x, int y){ // "void PropertiesOfShapes()" we dont need void or int for constructors. 
            length = x; 
            breadth = y; 

        }
    
        void get(){
            cout << "length = " << length << endl; 
            cout << "breadth = " << breadth << endl; 
        }
};

int main(){
    PropertiesOfShapes rectangle(4,8);
    rectangle.get(); 

    return 0; 
}