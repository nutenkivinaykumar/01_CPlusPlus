/*
Advantages: 
1. Individual rows are of dynamic sizes .
    -   Previously we have different sized rows, but here we have Dynamic sized rows
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

	vector<int> arr[m]; // Array of Vectors. 

	for(int i = 0; i < m; i++) // Traverse through Array containing Vectors
	{
		for(int j = 0; j < n; j++) // Traverse through Vectors inside arrays and store elements
		{
			arr[i].push_back(10);
		}
	}

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}