/*
Given an unsorted array Arr[] of N integers and 
a Key which is present in this array. You need 
to write a program to find the start index( index 
where the element is first found from left in the array ) 
and end index( index where the element is first found 
from right in the array ).
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findIndex(int a[], int n, int key)
{
    vector<int> v;
    int i = 0;
    int last = -1;
    int first = -1;
    
    while(i < n)
    {
        if(a[i] == key && first == -1)
        {
            first = i;
            continue;
        }
        if(a[i] == key && first != -1)
            last = i;
        i++;
    }
    v.push_back(first);
    v.push_back(last);
    return (v);
}