/*
Remove all characters except the numeric characters from an 
alphanumeric string.

Example:
Input: S = "AA1d23cBB4"
Output: 1234
Explanation: Remove all chacactres 
other than numbers
*/

#include <bits/stdc++.h>
using namespace std;

string removeCharacters(string S)
{
    string str = "";
    int i = 0;

    while (S[i] != '\0')
    {
        if (S[i] >= '0' && S[i] <= '9')
            str += S[i];
        i++;
    }
    return (str);
}