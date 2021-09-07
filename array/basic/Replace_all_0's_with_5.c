/*
You are given an integer N. You need to convert all 
zeroes of N to 5.

Example:
Input:
N = 1004
Output: 1554
Explanation: There are two zeroes in 1004
on replacing all zeroes with "5", the new
number will be "1554".

*/

int convertFive(int n)
{
    int num = 0;
    int count = 1;
    int res = 0;
    if (n < 1 || n > 10000)
        return (-1);
    while (n != 0)
    {
        res = n % 10;
        n /= 10;
        if (res == 0)
            res = 5;
        num = count * res + num;
        count *= 10;
    }
    return (num);
}