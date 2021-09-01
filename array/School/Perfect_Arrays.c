bool IsPerfect(int a[],int n)
{
    int i;

    i = 0;
    while (i < n--)
    {
        if(a[i] == a[n])
            i++;
        else
            return (false);
    }
    return (true);
}
