/*
Your task is to implement the function strstr. The function 
takes two strings as arguments (s,x) and  locates the 
occurrence of the string x in the string s. The function 
returns and integer denoting the first occurrence of the 
string x in s (0 based indexing).

Note: You are not allowed to use inbuilt function.

Example 1:
Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.

Example 2:

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based indexing).
*/

#include<bits/stdc++.h>
using namespace std;

int strstr(string s, string x)
{
    int i = 0;
    int j;

    while (s[i] != '\0')
    {
        if (s[i] == x[0])
        {
            j = 0;
            while (s[i + j] == x[j] && s[i + j] != '\0')
                j++;
            if (x[j] == '\0')
                return (i);
        }
        i++;
    }
    return (-1);
}