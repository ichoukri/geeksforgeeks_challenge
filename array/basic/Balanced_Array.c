/*
Given an array of even size N, task is to find minimum 
value that can be added to an element so that array 
become balanced. An array is balanced if the sum of the 
left half of the array elements is equal to the sum of 
right half.

Example :
Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 1
Explanation: 
Sum of first 2 elements is 1 + 5  = 6, 
Sum of last 2 elements is 3 + 2  = 5,
To make the array balanced you can add 1.

*/

int minValueToBalance(int a[], int n)
{
    int i = 0;
    int n1 = 0;
    int n2 = 0;
    while (i < n--)
    {
        n1 += a[i];
        n2 += a[n];
        i++;
    }
    n1 -= n2;
    return (n1 < 0 ? -n1 : n1);
}