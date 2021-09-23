/*
Given a string s, extract all the integers from s.

Example:
Input:
s = "1: Prakhar Agrawal, 2: Manish Kumar Rai, 3: Rishabh Gupta56"
Output: 1 2 3 56
Explanation: 
1, 2, 3, 56 are the integers present in s.
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> extractIntegerWords(string s)
{
    vector<string> vec;
    string str = "";
    int i = 0;

    while (s[i] != '\0')
    {
        if (isdigit(s[i]) && !isdigit(s[i + 1]))
        {
            str += s[i];
            vec.push_back(str);
            str = "";
        }
        else if (isdigit(s[i]) && isdigit(s[i + 1]))
            str += s[i];
        i++;
    }
    return (vec);
}