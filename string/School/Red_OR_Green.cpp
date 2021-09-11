/*
Given a string of length N, made up of only uppercase characters 
'R' and 'G', where 'R' stands for Red and 'G' stands for Green.
Find out the minimum number of characters you need to change to 
make the whole string of the same colour.

Example:
Input:
N=5
S="RGRGR"
Output:
2
Explanation:
We need to change only the 2nd and 
4th(1-index based) characters to 'R', 
so that the whole string becomes 
the same colour.
*/

#include <bits/stdc++.h>
using namespace std;

int RedOrGreen(int N, string S)
{
    int i = 0;
    int count = 0;

    while (S[i] != '\0')
    {
        if (S[i] == 'R')
            count++;
        i++;
    }
    if (count <= N / 2)
        return (count);
    else
        return (N - count);
}