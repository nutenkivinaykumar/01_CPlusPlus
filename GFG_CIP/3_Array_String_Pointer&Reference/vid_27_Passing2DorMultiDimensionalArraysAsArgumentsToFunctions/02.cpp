#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

void print(int mat[][2], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < 2; j++)
			cout << mat[i][j] << " ";
	}
}

int main()
{	

	int mat[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	print(mat, 3);

	return 0;
}