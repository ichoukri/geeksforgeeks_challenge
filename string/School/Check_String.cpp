/*
Given a string, check if all its characters are same or not.

Example:
Input:
s = "geeks"
Output: NO
Explanation: The string contains different
character 'g', 'e', 'k' and 's'
*/

#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int i = 1;
    while (s[i])
    {
        if (s[0] != s[i])
            return (0);
        i++;
    }
    return (1);
}