/*
Given a string. Count the number of Camel Case characters in it.

Example:
Input:
S = "ckjkUUYII"
Output: 5
Explanation: Camel Case characters present:
U, U, Y, I and I.
*/

#include <bits/stdc++.h>
using namespace std;

int countCamelCase(string s)
{
    int count = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count++;
        i++;
    }
    return (count);
}