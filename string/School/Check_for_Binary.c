/*
Given a non-empty sequence of characters str, return true if 
sequence is Binary, else return false

Example:
Input:
str = 101
Output:
1
Explanation:
Since string contains only 0 and 1, output is 1.
*/

int isBinary(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != '0' && str[i] != '1')
            return (0);
        i++;
    }
    return (1);
}