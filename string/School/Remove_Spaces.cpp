/*
Given a string, remove spaces from it. 

Example:
Input:
S = "geeks  for geeks"
Output: geeksforgeeks
Explanation: All the spaces have been removed.
*/

#include <bits/stdc++.h>
using namespace std;

string modify(string s)
{
    string str = "";
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] != ' ')
            str += s[i];
        i++;
    }
    return (str);
}