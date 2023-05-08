/*
Static Functions
    - Used to modify static data members/variables. 
    - Static members are not allowed to access the non-static part. However Non static functions can access static data. 
    - Normal functions can also access static data members and modify them, but it doesn't look good and its recommended to use Static functions only.

    - Static members do not have this pointers. Since they are called on a class and are modifying class specific data.

*/
#include<iostream>
using namespace std;

class Player{
    public:
        static int count;
        Player(){count++;}
        ~Player(){count--;}
        static int getCount(){return count;}
};

int Player :: count = 0;

int main()
{
    Player p1, p2;
    cout << Player :: getCount() << " ";
    
    return 0;
}