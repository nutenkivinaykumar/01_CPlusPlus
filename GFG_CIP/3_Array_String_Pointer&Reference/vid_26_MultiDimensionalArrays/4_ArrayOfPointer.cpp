/*
1. This is very close to the previous method.  
    -    Array of pointers are created instead of Double-pointer and rest of the method is same. 
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;


int main()
{	
	int m = 3, n = 2;

// START
	int *arr[m];                    // Creating an array of pointers

	for(int i = 0; i < m; i++)      // Allocating memory for individual rows, i.e. Traverse through each row and allocate memory dynamically. 
		arr[i] = new int[n];
// END
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			arr[i][j] = 10;	

			cout << arr[i][j] << " ";
		}
	}


	return 0;
}