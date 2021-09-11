/*
Given a list of characters, merge all of them into a string.

Example:
Input:
N = 13
Char array = g e e k s f o r g e e k s
Output: geeksforgeeks 
Explanation: combined all the characters
to form a single string.
*/

#include <bits/stdc++.h>
using namespace std;

string chartostr(char arr[], int n)
{
    string s = "";
    int count = 0;
    int i = 0;

    while (arr[i] != '\0')
    {
        if (arr[i] != ' ' && count < n)
        {
            count++;
            s += arr[i];
        }
        i++;
    }
    return (s);
}