/*
Given a string str containing alphanumeric characters. 
The task is to calculate the sum of all the numbers present 
in the string.

Example 1:
Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24.

Example 2:
Input:
str = geeks4geeks
Output: 4
Explanation: 4 is the only number, so the
sum is 4.
*/

#include <iostream>
using namespace std;

int findSum(string str)
{
    int sum = 0;
    int i = 0;
    int num;
    while (str[i] != '\0')
    {
        num = 0;
        while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
        {
            num *= 10;
            num += str[i] - 48;
            i++;
        }
        sum += num;
        if (str[i] == '\0')
            break;
        i++;
    }
    return (sum);
}