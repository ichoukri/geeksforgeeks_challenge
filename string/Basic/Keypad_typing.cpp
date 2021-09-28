/*
You are given a string S of alphabet characters and the task is 
to find its matching decimal representation as on the shown 
keypad. Output the decimal representation corresponding to the 
string. For ex: if you are given “amazon” then its corresponding 
decimal representation will be 262966.

Example:
Input:
S = geeksforgeeks
Output: 4335736743357
Explanation:geeksforgeeks is 4335736743357
in decimal when we type it using the given
keypad.
*/

#include <bits/stdc++.h>
using namespace std;

string printNumber(string s, int n)
{
    int arr[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    string str = "";
    int i = 0;

    while (s[i] != '\0')
    {
        str += arr[(s[i] - 'a')] + '0';
        i++;
    }
    return (str);
}