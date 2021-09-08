/*
Given an array of penalties fine[], an array of car numbers 
car[], and also the date. The task is to find the total fine 
which will be collected on the given date. Fine is collected 
from odd-numbered cars on even dates and vice versa.

Example:
Input:
N = 4, date = 12
car[] = {2375, 7682, 2325, 2352}
fine[] = {250, 500, 350, 200}
Output:
600
Explantion:
The date is 12 (even), so we collect the
fine from odd numbered cars. The odd
numbered cars and the fines associated
with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600

*/

long long int totalFine(int n, int date, int car[], int fine[])
{
    long long int even = 0;
    long long int odd = 0;
    int i = 0;

    while (i < n)
    {
        if (car[i] % 2 == 0)
            odd += fine[i];
        else
            even += fine[i];
        i++;
    }
    return ((date % 2 == 0) ? even : odd);
}