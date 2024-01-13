#include <stdio.h>

int print_last_digit(int n)
{
    int r;

    if (n < 0)
    {
        r = -1 * (n % 10);
        putchar(r + '0');
        return (r);
    }
    
    else
    {
        r = n % 10;
        putchar(r + '0');
        return (r);
    }
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}