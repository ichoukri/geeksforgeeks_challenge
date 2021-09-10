/*
Given a sorted array consisting 0’s and 1’s. The task 
is to find the index of first ‘1’ in the given array.

Example:
Input : 
arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1}
Output : 
6
Explanation:
The index of first 1 in the array is 6.
*/

int firstIndex(int a[], int n)
{
    int i = 0;

    while (i < n)
    {
        if (a[i] == 1)
            return (i);
        i++;
    }
    return (-1);
}