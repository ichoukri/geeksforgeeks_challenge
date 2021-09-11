/*
Given a string S, the task is to change the complete string to 
Uppercase or Lowercase depending upon the case for the first 
character.

Example 1:
Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

Example 2:
Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.
*/

#include <bits/stdc++.h>
using namespace std;

string modify(string s)
{
    int i = 1;
    while (s[i] != '\0')
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
        i++;
    }
    return (s);
}