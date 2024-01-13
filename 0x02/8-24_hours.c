#include <stdio.h>

void jack_bauer(void)
{
    int i, j;

    for (i = 0; i < 24; i++)
    {
        for (j = 0; j < 60; j++)
        {
            putchar(i / 10 + 48);
            putchar(i % 10 + 48);
            putchar(':');
            putchar(j / 10 + 48);
            putchar(j % 10 + 48);

            putchar('\n');
        }
    }
}