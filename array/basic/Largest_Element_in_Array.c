int largest(int arr[], int n) 
{
    int max;
    int i;
    
    max = arr[0];
    i = 1;
    while (i < n)
    {
        if (arr[i] > max)
            max = arr[i];
        i++;
    }
    return (max);
}