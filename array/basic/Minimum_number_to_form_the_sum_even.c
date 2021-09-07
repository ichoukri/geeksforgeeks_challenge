/*
Given an array arr[] of size N, the task is to add the 
minimum number(should be greater than 0) to the array 
so that the sum of the array becomes even

Example:

Input: N = 8
arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
Output:  2
Explanation:  Sum of array is 36, so 
we add minimum number 2 to make the 
sum even.
*/

int minNum(long long int arr[], int n)
{
    long long int sum = arr[0];
    int i = 1;
    while (i < n)
    {
        sum += arr[i];
        i++;
    }
    if ((sum % 2) == 0)
        return (2);
    return (1);
}