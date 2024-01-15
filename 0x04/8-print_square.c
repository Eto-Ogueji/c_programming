#include <stdio.h>

void print_square(int size)
{
    int count, i;

    if (size <= 0)
        putchar('\n');

    for (count = 0; count < size; count++)
    {
        for (i = 0; i < size; i++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}