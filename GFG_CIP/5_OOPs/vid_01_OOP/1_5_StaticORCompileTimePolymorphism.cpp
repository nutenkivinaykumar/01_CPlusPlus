/*
Two fns with same names, one to find max of 2 and other for 3 integers. 
Depending upon the parameters passed to that function. 
With Default arguments also this can be achieved ??????????????????????????????????????????? 
*/

#include<iostream>
using namespace std;


int add(int a, int b){
    return a + b; 
}

int add(int a, int b, int c){
    return a + b + c; 
}

int main(){

    cout << add(1, 2) << endl; 
    cout << add(1,2,3) << endl; 

    return 0; 
}