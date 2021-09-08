/*
You are given two arrays, A and B, of equal size N. 
The task is to find the minimum value of A[0] * B[0] + 
A[1] * B[1] +…+ A[N-1] * B[N-1], where shuffling of 
elements of arrays A and B is allowed.

Example:

Input:
N = 3 
A[] = {3, 1, 1}
B[] = {6, 5, 4}
Output:
23 
Explanation:
1*6+1*5+3*4 = 6+5+12
= 23 is the minimum sum
*/

#include <bits/stdc++.h>
using namespace std;

long long int minValue(int a[], int b[], int n)
{
    long long int sum = 0;
    int i = -1;
    sort(a, a + n);
    sort(b, b + n);
    while (++i < n)
        sum += a[i] * b[n - i - 1];
    return (sum);
}