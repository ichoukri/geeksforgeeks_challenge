/*
You are given a string s. You need to reverse the string.

Example 1:
Input:
s = Geeks
Output: skeeG

Example 2:
Input:
s = for
Output: rof
*/

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str)
{
    int i = -1;
    int len = str.size();
    char c;
    while (++i < --len)
    {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
    }
    return (str);
}