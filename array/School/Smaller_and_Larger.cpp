/*
Given a sorted array Arr of size N and a value X,
find the number of array elements less than or 
equal to X and elements more than or equal to X
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> getMoreAndLess(int arr[], int n, int x) 
{
	vector<int> v;
	int i -1;
    int min = 0;
    int max = 0;
    
    while (++i < n)
    {
        if (arr[i] <= x)
            min++;
        if (arr[i] >= x)
            max++;
    }
    v.push_back(min);
    v.push_back(max);
    return (v);
}