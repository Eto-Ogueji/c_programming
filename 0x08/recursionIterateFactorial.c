// A function that finds the factorial of a number iteratively

#include <stdio.h>

int factorial(int n)
{
    int i;
    int res;

    i = 1;
    res = 1;

    while(i <= n)
    {
        if (n == 0)
        {
            return (1);
        }

        res = res * i;
        i++;
    }
}