/*
Given a string S, write a program to count the occurrence of 
Lowercase characters, Uppercase characters, Special characters 
and Numeric values in the string.
Note: There are no white spaces in the string.

Example:
Input:
S = "#GeeKs01fOr@gEEks07"
Output:
5
8
4
2
Explanation: There are 5 uppercase characters,
8 lowercase characters, 4 numeric characters
and 2 special characters.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> count(string s)
{
    vector<int> v(4, 0);
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            v[0] += 1;
        else if (s[i] >= 'a' && s[i] <= 'z')
            v[1] += 1;
        else if (s[i] >= '0' && s[i] <= '9')
            v[2] += 1;
        else
            v[3] += 1;
        i++;
    }
    return (v);
}