/*
Given a string S, we need to find reciprocal of it. The reciprocal 
of the letter is found by finding the difference between the 
position of the letter and the first letter ‘A’. Then decreasing 
the same number of steps from the last letter ‘Z’. The character 
that we reach after above steps is reciprocal.
Reciprocal of Z is A and vice versa because if you reverse the 
position of the alphabet A will be in the position of Z.
Similarly, if the letter is a small case then the first letter will 
be 'a' and the last letter will be 'z'. and the definition of 
reciprocal remains the same.

Note: If the character is not a letter its reciprocal will be the 
same character.

Example:
Input:
S = "ab C"
Output:
zy X
Explanation:
The reciprocal of the first letter 'a' is 'z'.
The reciprocal of the second letter 'b' is 'y'.
The reciprocal of the third letter ' ' is ' '.
The reciprocal of the last letter 'C' is 'X'.
*/

#include <bits/stdc++.h>
using namespace std;

string reciprocalString(string S)
{
    int i = 0;

    while (S[i] != '\0')
    {
        if ((S[i] >= 'a' && S[i] <= 'm') || (S[i] >= 'A' && S[i] <= 'M'))
        {
            if ((S[i] >= 'a' && S[i] <= 'm'))
                S[i] = 'z' - (S[i] - 'a');
            else
                S[i] = 'Z' - (S[i] - 'A');
        }
        else if ((S[i] >= 'n' && S[i] <= 'z') || (S[i] >= 'N' && S[i] <= 'Z'))
        {
            if ((S[i] >= 'n' && S[i] <= 'z'))
                S[i] = 'a' + ('z' - S[i]);
            else
                S[i] = 'A' + ('Z' - S[i]);
        }
        i++;
    }
    return (S);
}