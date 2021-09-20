/*
Given an 2-d array of integers having N*N elements, print 
the transpose of the array. 

Example:
Input : arr[] = {{1,2,3}, {4,5,6}, {7,8,9}} 
        and N = 3
Output : 1 4 7 2 5 8 3 6 9
Explanation:
1 2 3       1 4 7
4 5 6 ----> 2 5 8
7 8 9       3 6 9
Transpose of array.
*/

#include <bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>> vec(n, vector<int>(n, 0));
    int j = 0;
    int i;
    while (j < n)
    {
        i = 0;
        while (i < n)
        {
            vec[j][i] = (a[i][j]);
            i++;
        }
        j++;
    }
    return (vec);
}
