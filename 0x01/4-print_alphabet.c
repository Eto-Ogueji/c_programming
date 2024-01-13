#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: always 0 (Success)
 */

int main(void)
{
    int n;

    for (n = 'a'; n <= 'z'; n++)
        if (n != 'q' && n != 'e')
            putchar(n);
    putchar('\n');
    return (0);
}