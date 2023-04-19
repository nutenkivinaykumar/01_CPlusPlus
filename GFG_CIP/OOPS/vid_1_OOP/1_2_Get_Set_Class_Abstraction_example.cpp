/* Using get and set to demostrate abstraction*/
#include <iostream>
using namespace std; 

class PropertiesOfShapes{
    private: 
        int length, breadth; 
    
    public: 
        
        void set(int x, int y){
            length = x; 
            breadth = y; 
        }
    
        void get(){
            cout << "length = " << length << endl; 
            cout << "breadth = " << breadth << endl; 
        }
};

int main(){
    PropertiesOfShapes rectangle; 
    rectangle.set(4,8);
    rectangle.get(); 

    return 0; 
}