/*
Given an array Arr of size N, print 
second largest element from an array
*/

#include<bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n) {
	if(n < 2)
        return(-1);
	sort(arr, arr + n);
    while (--n)
    {
        if(arr[n] != arr[n - 1])
            return (arr[n - 1]);
    }
    return(-1);
}