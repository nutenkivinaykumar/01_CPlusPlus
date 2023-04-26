/*
Static data members are special members shared among all objects. 
1. Static variables
    - Purpose of static data members is to create a member which is shared among all objects of a class. 
    - They are also called as class members. Because they are class specific and are shared among all objects. 
    - Normal functions can also access static data members and modify them, but it doesn't look good and its recommended to use Static functions only. 

2. Static Functions
    - Used to modify static data members/variables. 
    - Static members are not allowed to access the non-static part. However Non static functions can access static data. 
3. Static members do not have this pointers. Since they are called on a class and are modifying class specific data. 
    - While this pointer is a pointer to an object. 
*/

#include <iostream>
using namespace std; 

class Player{
    private: 
        static int count_; 
    public: 
        static int count; 
        int check = 10; 
        Player(){ count++; }
        ~Player(){ count--;}
        static int getCount_() {return count_; } // Static function. - To modify and access the static data member count_ which is private. 
}; 

int Player::count=0; // **SYNTAX to define Static data members. It should be defined outside the class. 
int Player::count_=0; 
int main(){
    Player p1; 
    cout << Player::count << " " << p1.check << endl; 
    {
        Player p3; 
        cout << Player::count << endl;  // here count is incremented and decremented as soon as this scope is exited.
                                        // similarly even if we use delete operator, count will be decremented.  
    }
    Player p2; 
    cout << Player::count << " " ; 
    cout << Player::getCount_() << endl; // syntax similar to static members can be used(recommended). 
    cout << p2.getCount_() << endl; // its not recommended. 
    return 0; 
}