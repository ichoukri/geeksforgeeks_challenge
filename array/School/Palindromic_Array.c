/*
Given a Integer array A[] of n elements. 
Your task is to complete the function PalinArray. 
Which will return 1 if all the elements of the 
Array are palindrome otherwise it will return 0.
*/

int PalinArray(int a[], int n)
{
    char arr[11] = "";
    long int nb;
    int i = 0;
    int j;
    int k;
    
    while(i < n)
    {
        nb = a[i];
        if (nb < 0)
            nb = -nb;
        j = 0;
        while (nb != 0)
        {
            arr[j++] = nb % 10 + 48;
            nb /= 10;
        }
        k = 0;
        while (k < --j)
        {
            if (arr[k] != arr[j])
                return (0);
            k++;
        }
        i++;
    }
    return (1);
}