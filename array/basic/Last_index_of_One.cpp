/*

Given a string S consisting only '0's and '1's,  
find the last index of the '1' present in it.

Example:
Input:
S = 00001
Output:
4
Explanation:
Last index of  1 in given string is 4.

*/

#include <bits/stdc++.h>
using namespace std;

int lastIndex(string s)
{
    int i = 0;
    int index = -1;
    while (s[i] != '\0')
    {
        if (s[i] == '1')
            index = i;
        i++;
    }
    return (index);
}