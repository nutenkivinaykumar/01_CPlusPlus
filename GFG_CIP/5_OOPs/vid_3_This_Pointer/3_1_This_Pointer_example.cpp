#include<iostream>
using namespace std;

class Point{ 
    public:
        int x, y;

        Point(int x, int y){
            this -> x = x;
            this -> y = y;
        } 
};

int main()
{
    Point p1(10, 20), p2(5, 5);
    cout << "Printing p1 data members: " << p1.x << " " << p1.y << endl; 
    cout << "Printing p2 data members: " << p2.x << " " << p2.y << endl;
    return 0;
}