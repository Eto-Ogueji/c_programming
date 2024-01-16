#include <stdio.h>

void puts_half(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        ;
    }

    if (i % 2 != 0)
        i++;

    for (i /= 2; str[i] != 0; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}