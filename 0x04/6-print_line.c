#include <stdio.h>

void print_line(int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (n <= 0)
            putchar('\n');

        else
            putchar('_');
    }

    putchar('\n');
}