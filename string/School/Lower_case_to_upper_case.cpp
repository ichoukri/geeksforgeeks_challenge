/*
Given a string str containing only lowercase letters, generate 
a string with the same letters, but in uppercase.

Example:
Input:
str = "geeks"
Output: GEEKS
*/

#include <bits/stdc++.h>
using namespace std;

string to_upper(string str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = toupper(str[i]);
        i++;
    }
    return (str);
}