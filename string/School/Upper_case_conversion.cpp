/*
Given a string str, convert the first letter of each word in 
the string to uppercase. 

Example:
Input:
str = "i love programming"
Output: "I Love Programming"
Explanation:
'I', 'L', 'P' are the first letters of 
the three words.
*/

#include <bits/stdc++.h>
using namespace std;

string transform(string s)
{
    int i = 0;

    while (s[i] == ' ')
        i++;
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = toupper(s[i++]);
    while (s[i] != '\0')
    {
        if (s[i - 1] == ' ' && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] = toupper(s[i]);
        i++;
    }
    return (s);
}