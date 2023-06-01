/*
Interesting Facts: 

Advantages: 
1. We can have individual rows of different sizes. 
2. One more advantage is discussed in the topic/video- Passing 2D arrays as arguments to functions
	-	With this setup, we can have a function, that can take dimensions as arguments and can work for any 2D array. 
	-	Didn't understand this, Let's clarify in that video mentioned above. 
Disadvantage: 
1. It is not cache friendly. Since elements are not stored in contiguous locations
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
// ********************************************************************
// STARTED ALLOCATING MEMORY FOR A 2D ARRAY WITH DOUBLE POINTER.
	int **arr;							// Created a DOUBLE-POINTER

	arr = new int* [m];					// DOUBLE-POINTER is pointing to ARRAY-OF-POINTERS

	for(int i = 0; i < m; i++)			// Individual arrays in the array of pointers, they allocate memory dynamically for individual rows 
		arr[i] = new int[n];

// FINISHED ALLOCATING MEMORY FOR A 2D ARRAY WITH DOUBLE POINTER. 
// NOW WE NEED TO STORE SOME VALUE IN ALL THESE ADDRESSES/MEMORY ALLOCATED. 
// ********************************************************************

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i][j] = 10;	

			cout << arr[i][j] << " ";
		}
	}


	return 0;
}