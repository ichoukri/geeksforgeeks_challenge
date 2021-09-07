/*
Pitsy needs help in the given task by her teacher. 
The task is to divide a array into two sub array 
(left and right) containing n/2 elements each and do 
the sum of the subarrays and then multiply both the subarrays.

Input : arr[] = {1, 2, 3, 4}
Output : 21
Explanation:
Sum up an array from index 0 to 1 = 3
Sum up an array from index 2 to 3 = 7
Their multiplication is 21
*/

int multiply(int arr[], int n)
{
    int sum = 0;
    int nb = 0;
    int i = 0;
    while (i < n)
    {
        if (i < n / 2)
            sum += arr[i];
        else
            nb += arr[i];
        i++;
    }
    return (sum * nb);
}