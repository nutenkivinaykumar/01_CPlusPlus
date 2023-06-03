/*
All the methods discussed give their own advangates. 

Other methods
1. We can create a Jagged array
	-	Jagged array: If a 2d array has different number of items in individual rows. 
2. Array of vectors
	-	Individual rows can have dynamic elements
3. Vector of Vectors
	-	Dynamic rows and Columns


Disadvantages: 
1. Individual elements are not stored in contiguous locations. 
	-	=> Not cache friendliness
	Array of Vectors partial
	Vector of vector completely
	Pointer of Pointer completely not cache friendly


2D-Native array method
1. Cache friendliness

*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

void print(vector<vector<int>> arr) // Here No need to pass Length of Columns or Rows
{
    // To avoid data copy and Optimize we can use the line below by passing vector of vectors as reference
    // void print(vector<vector<int>> &arr){
	for(int i = 0; i < arr.size(); i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	vector<vector<int>> arr;

	for(int i = 0; i < m; i++)
	{
		vector<int> v;

		for(int j = 0; j < n; j++)
		{
			v.push_back(i);
		}

		arr.push_back(v);
	}

	print(arr);

	return 0;
}