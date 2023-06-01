/*
Important points about Multi-Dimensional Arrays: 
1. Elements are stored in ROW-MAJOR order. C++ Follows Row-Major order. 
    a. There is something called COLUMN-MAJOR order also.
2. Internal Curly Brackets are optional
3. Only the first dimension can be omitted when we initialize the array. 
    -   This will be taken care automatically by Compiler
    -   All other dimensions must be written. 
    Ex:     int arr[][2] = {{1,2}, {3,4}}; 
            int arr[][2][2] =  {{1,2}, {3,4}, 
                                {5,6}, {7,8}}
                                
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;


int main()
{
	int arr[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}}; // Ex for point 2: int arr[3][2] = {10, 20, 30, 40, 50, 60}; // Both are equivalent
                                // Reason: Row-Major order, i.e. storage of elements in the memory
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}