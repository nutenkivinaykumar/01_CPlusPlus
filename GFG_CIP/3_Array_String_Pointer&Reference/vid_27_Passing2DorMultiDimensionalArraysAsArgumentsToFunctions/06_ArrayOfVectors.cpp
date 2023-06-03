/*
-	Till 05, they were C-Style methods using double pointers or array of pointers. 
-	C++ Vector based solutions
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

void print(vector<int> arr[], int m) // Passing Number of rows is enough, Number of columns is not required to pass as an argument. 
{									 // Because number of columns can be retrived from arr[i].size() => vector.size() for each vector inside the array. 
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	vector<int> arr[m];

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i].push_back(i);
		}
	}

	print(arr, m);

	return 0;
}