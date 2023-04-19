#include <iostream>
#include <string>
using namespace std; 

class CommonInformation{
    public: 
        string name;  
        string standard; 
        string stream; 
        
        int rollNo;
        int physics_marks; 
        int chemistry_marks; 

        void printCommonInfo(){
            cout << "Name of student: " << name << endl; 
            cout << "Roll No of student: " << rollNo << endl; 
            cout << "Class of student : " << standard << endl; 
            cout << "Stream of student : " << stream << endl; 
        }
};

class MPC_Student : public CommonInformation{
    public: 
        int maths_marks; 
};

class BiPC_Student : public CommonInformation{
    public: 
    int biology_marks; 
}; 