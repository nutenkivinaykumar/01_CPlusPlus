/*
Q1: Is it possible to print all the printComonInfo from MPC_Student object? 

*/
#include <iostream>
#include <string>
using namespace std; 

class CommonInformation{
    public: 
        string name;  
        string stream; 
        
        int standard; 
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
        void printCommonInfo1(){
            cout << "maths marks : " << maths_marks << endl; 
        }
};

class BiPC_Student : public CommonInformation{
    public: 
    int biology_marks; 
    void printCommonInfo1(){
        cout << "biology marks : " << biology_marks << endl; 
    }
}; 

int main(){
    
    MPC_Student mpc_s; 
    BiPC_Student bipc_s; 

    mpc_s.chemistry_marks = 10; 
    mpc_s.maths_marks = 11; 
    mpc_s.physics_marks = 12; 
    mpc_s.name = "badsha"; 
    mpc_s.rollNo = 1123; 
    mpc_s.standard = 11; 
    mpc_s.stream = "MPC"; 

    mpc_s.printCommonInfo1(); 
    mpc_s.printCommonInfo(); 
}