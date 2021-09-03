/*
Given a number N. Your task is to check whether it is
fascinating or not.
Fascinating Number: When a number(should contain 3 digits 
or more) is multiplied by 2 and 3 ,and when both these 
products are concatenated with the original number, then it 
results in all digits from 1 to 9 present exactly once

example:

Input: 
n = 192
Output: true
Explanation: After multiplication with 2
and 3, and concatenating with original
number, number will become 192384576 
which contains all digits from 1 to 9.
*/

#include <bits/stdc++.h>
using namespace std;

bool fascinating(int n)
{
	string str = to_string(n) + to_string(n*2) + to_string(n*3);
    int len = str.length();
    int result = 0;
    int i = 0;
    int j = 0;
    if(len != 9)
        return false;
    sort(str.begin(), str.end());
    if (str[0] == '1')
        j = 1;
    while(i < len)
    {
        if(str[i] == (j + 48))
            j++;
        i++;
    }
    return ((j - 1) == 9 ? true : false);
}