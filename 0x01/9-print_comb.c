#include <stdio.h>

int main(void)
{
    int n;

    n = 48;

    while (n < 57)
        putchar(n);
        if (n != 57)
        {
            putchar(44);
            putchar(32);
        }
        n++;

        putchar(10);
        
    return (0);
}