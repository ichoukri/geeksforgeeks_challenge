/*
Given an array Arr of N positive integers and a 
number K where K is used as a threshold value to 
divide each element of the array into sum of different 
numbers. Find the sum of count of the numbers in which 
array elements are divided.

Example :
Input:
N = 4, K = 3
Arr[] = {5, 8, 10, 13}
Output: 14
Explanation: Each number can be expressed as sum 
of different numbers less than or equal to K as
5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 
13 (3 + 3 + 3 + 3 + 1). So, the sum of count 
of each element is (2+3+4+5)=14.
*/

int totalCount(int arr[], int n, int k)
{
	int count = 0;
	int i = 0;
	while (i < n)
	{
		while (arr[i] != 0)
		{
			count++;
			if (arr[i] >= k)
				arr[i] = arr[i] - k;
			else
				break;
		}
		i++;
	}
	return (count);
}