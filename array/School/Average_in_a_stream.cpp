#include <bits/stdc++.h>
using namespace std;

/*
Given a stream of incoming numbers, find 
average or mean of the stream at every point.
*/

vector<float> streamAvg(int arr[], int n) 
{
	vector<float> v;
	int i = 0;
    int sum = 0;
    while(i < n)
    {
        sum += arr[i];
        v.push_back((float) sum / (i + 1));
        i++;
    }
    return (v);
}