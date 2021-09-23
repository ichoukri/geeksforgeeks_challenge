/*
Given a string S of length N, find the pattern of the strings as 
shown below in the examples.

Example:
Input: S = "GeeK"
Output: Geek
        Gee
        Ge
        G
Explanation: Decrease one character after each line
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> pattern(string S)
{
    vector<string> vec;

    int len = S.size();
    while (--len >= 0)
    {
        vec.push_back(S);
        S[len] = '\0';
    }
    return (vec);
}