/*
Advantage: 
1. Number of rows can also be dynamic along with number of Columns. 
2. Easy to pass to a function

Disadvantages: 
1. Not as cache friendly as simple 2-D arrays. 
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

	vector<vector<int>> arr;

// Starting to create a 2-D array
	for(int i = 0; i < m; i++) 
	{
		vector<int> v;  // Creating individual rows inside a vector which stores vectors.

		for(int j = 0; j < n; j++)
		{
			v.push_back(10);
		}

		arr.push_back(v); // Adding individual rows vectors to main vector which is a vector of vectors. 
	}
// Ending of creating a 2-D array

	for(int i = 0; i < arr.size(); i++)  // Traversing through 2-D array
	{
		for(int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}