/*
______________________________
|  20  |  30  |  40  |  50  |
_____________________________
0x2000 0x2004 0x2008 0x2012

int *ptr = arr; 
cout << *(ptr+2); output: 40
*/

#include <iostream>
using namespace std; 

void fun(int *ptr, int n){      // ***** When we pass an array as an argument to a function, it is always passed as a pointer. > void fun(int *ptr (or) int ptr[]){
    for(int i = 0; i <n; i++){
        cout << ptr[i] << " ";  // ***** For pointer also we can use array like syntax
// equivalent to: *(ptr + i)
    }

}

int main(){
    int arr[] = {10, 20, 30, 40, 50}; 
    int *ptr = arr; // **** Anywhere in the program, when we write array name, it gives address of the first element.
    cout << *(ptr+20); // output: 40

    //////////////////////////////////////////

    // Passing an array to a function

    fun(arr,5); 
    return 0; 
}