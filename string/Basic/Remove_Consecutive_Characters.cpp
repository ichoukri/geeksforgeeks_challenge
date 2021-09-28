/*
Given a string S delete the characters which are appearing more 
than once consecutively.

Example:
Input:
S = aabb
Output:  ab 
Explanation: 'a' at 2nd position is
appearing 2nd time consecutively.
Similiar explanation for b at
4th position.
*/

#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S)
{
    string str = "";
    int i = 0;
    while (S[i] != '\0')
    {
        if (S[i] != S[i + 1])
            str += S[i];
        i++;
    }
    return (str);
}