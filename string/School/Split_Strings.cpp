/*
Given a string S which consists of alphabets , numbers and special 
characters. You need to write a program to split the strings in 
three different strings S1, S2 and S3 such that the string S1 will 
contain all the alphabets present in S , the string S2 will 
contain all the numbers present in S and S3 will contain all 
special characters present in S.  The strings S1, S2 and S3 should 
have characters in same order as they appear in input.

Example:
Input:
S = geeks01for02geeks03!!!
Output:
geeksforgeeks
010203
!!!
Explanation: The output shows S1, S2 and S3.
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> splitString(string S)
{
    vector<string> str(3, "");
    int i = 0;
    while (S[i] != '\0')
    {
        if (isupper(S[i]) || islower(S[i]))
            str[0] += S[i];
        else if (isdigit(S[i]))
            str[1] += S[i];
        else
            str[2] += S[i];
        i++;
    }
    return (str);
}