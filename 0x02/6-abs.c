#include <stdio.h>

int _abs(int n)
{
    int nAbs;
    if (n < 0)
    {
        nAbs = n * -1;
        return nAbs;
    }

    else
        return (n);
}

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}