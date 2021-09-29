/*
Given a string of a constant length, print a triangle out of it. 
The triangle should start with the given string and keeps 
shrinking downwards by removing one character from the begining 
of the string. The spaces on the left side of the triangle should 
be replaced with dot character.

Example:
Input:
S = Geeks
Output:
Geeks
.eeks
..eks
...ks
....s
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

string triDownwards(string S)
{
    int len = S.size();
    int i = 0;
    int n = 0;
    int j;
    while (i < len - 1)
    {
        j = 0;
        n++;
        while (j < len)
        {
            if (j < n)
                S.push_back('.');
            else
                S.push_back(S[j]);
            j++;
        }
        i++;
    }
    return S;
}