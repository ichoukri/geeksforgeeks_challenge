/*
Given a string consisting of lowercase english alphabets, reverse 
only the vowels present in it and print the resulting string.

Example:
Input: 
S = "practice"
Output: prectica
Explanation: The vowels are a, e
Reverse of these is e, a.
*/

#include <bits/stdc++.h>
using namespace std;

string modify(string s)
{
    int i = 0;
    int len = s.size() - 1;

    while (i < len)
    {
        if ((s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'))
        {
            if ((s[len] == 'a' || s[len] == 'i' || s[len] == 'e' || s[len] == 'o' || s[len] == 'u'))
            {
                swap(s[i], s[len]);
                len--;
                i++;
            }
        }
        if (s[i] != 'a' && s[i] != 'i' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u')
            i++;
        if (s[len] != 'a' && s[len] != 'i' && s[len] != 'e' && s[len] != 'o' && s[len] != 'u')
            len--;
    }
    return (s);
}