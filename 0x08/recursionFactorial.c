// finds the factorial of a number recursively

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }
    return (n * factorial(n - 1));
}

int factorial2(int n)
{
    int i;
    int res;

    i = 1;
    res = 1;
    while(i <= n)
    {
        res = res * i;
        i++;
    }

    return (res);
}