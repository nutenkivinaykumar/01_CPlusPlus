/* 
Static Members: are special members shared among all objects and Defined outside the class. 
- Static Members can be Static Data Members(Variables), or Static Functions. 
- Static members do not have this pointers. Since they are called on a class and are modifying class specific data. 
- While this pointer is a pointer to an object. 

Application: 
- Track count of players who join and leave an online game. Count of players present at any moment. 
- Decrement the count when a player leave(Object is destructed)
- Increment when a player joins(When an Object is constructed)
-* Simple solution to this application: Create a Global count variable. 
-* Better solution is to use Static Data member. 
*/

#include<iostream>
using namespace std;

class Player{
    public:
        static int count; // Ideally data members should be private, and not public. For simplicity of example we have written this way. 
        Player(){count++;}
        ~Player(){count--;}
};

int Player :: count = 0; // **SYNTAX to define static data members outside the class. 

int main()
{
    Player p1;
    cout << Player :: count << " "; // Count variable(Static data member) is accessed directly using the class name. Recommended way of using Static Data Members or Static variables. 
    cout << p1.count << " "; // Not a recommended way. 
    Player p2;
    cout << Player :: count << " ";
    {
        Player p3; 
        cout << Player :: count << " "; 
    }
    cout << Player :: count << " "; 

    return 0;
}