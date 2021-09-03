/*
Given an array A of size N of integers. Your task 
is to find the minimum and maximum elements in the array.
*/

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) 
{
    
    struct pair var;
    long long int i = 1;
    var.min = arr[0];
    var.max = arr[0];
    while(i < n)
    {
        if (arr[i] > var.max)
            var.max = arr[i];
        if(arr[i] < var.min)
            var.min = arr[i];
        i++;
    }
    return (var);
}