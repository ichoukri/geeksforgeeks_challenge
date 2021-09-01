/*
Given an array of N distinct elements, 
the task is to find all elements in array 
except two greatest elements in sorted order.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findElements(int a[], int n)
{
    vector<int> v;
    int i;
    
    sort(a, a + n);
    i = 0;
    while (i < n - 2)
    {
        v.push_back(a[i]);
        i++;
    }
    return (v);
}