/*
Write a program to find the sum of the given 
series 1+2+3+ . . . . . .(N terms)
*/

/*
The LL makes the integer literal of type long long.

So 2LL, is a 2 of type long long.

Without the LL, the literal would only be of type int.
more about this : 

https://stackoverflow.com/questions/16248221/what-is-1ll-or-2ll-in-c-and-c
*/

long long seriesSum(int n)
{
    return (n*((n*1ll)+1))/2;
}