/*
Given a string, remove the vowels from the string.

Example:
Input: S = "welcome to geeksforgeeks"
Output: wlcm t gksfrgks
Explanation: Ignore vowels and print other
characters 
*/

#include <bits/stdc++.h>
using namespace std;

string removeVowels(string S)
{
    string str = "";
    int len = S.size();
    int i = 0;

    while (i < len)
    {
        if (S[i] != 'e' && S[i] != 'a' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
            str += S[i];
        i++;
    }
    return (str);
}