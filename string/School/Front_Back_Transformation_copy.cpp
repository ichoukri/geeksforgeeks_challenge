/*
Given a string S, consisting only of english alphabets, replace 
all the alphabets with the alphabets occuring at the same position 
when counted in reverse order of alphabets. For example, 'a' would 
be replaced by 'z', 'b' by 'y', 'c' by 'x' and so on. Any capital 
letters would be replaced by capital letters only.

Example:
Input: S = "Hello"
Output: Svool
Explanation: 'H' is the 8th letter from the
beginning of alphabets, which is replaced by
'S' which comes at 8th position in reverse order
of alphabets. Similarly, all other letters are 
replaced by their respective upper or lower case 
letters accordingly.
*/

#include <bits/stdc++.h>
using namespace std;

string convert(string S)
{
    int i = 0;

    while (S[i] != '\0')
    {
        if ((S[i] >= 'n' && S[i] <= 'z'))
            S[i] = 'a' + ('z' - S[i]);
        else
            S[i] = 'A' + ('Z' - S[i]);
        i++;
    }
    return (S);
}