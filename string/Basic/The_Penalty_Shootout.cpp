/*
Given a string S contains 0's, 1's, and 2's, the task is to find 
the number of goals on the penalty.
 '1' stands for "goal".
 '0' stands for "no goal".
 '2' stands for a foul which gives a penalty.
Example:
Input: S = "1012012112110"
Output: 2
Explanation: There are 3 penalties,
of which he scores only 2.
1012012112110
*/

#include <bits/stdc++.h>
using namespace std;

int penaltyScore(string S)
{
    int goals = 0;
    int i = 1;
    while (S[i] != '\0')
    {
        if (S[i] == '1' && S[i - 1] == '2')
            goals++;
        i++;
    }
    return (goals);
}