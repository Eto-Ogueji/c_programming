#include <stdio.h>

void print_to_98(int n)
{

    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            printf("%d", n);

            if (n == 98)
                continue;
            printf(", ");
        }
        printf("\n");
    }

    else if (n >= 98)
    {
        for (; n >= 98; n--)
        {
            printf("%d", n);

            if (n == 98)
                continue;
            printf(", ");
        }
        printf("\n");
    }
}

int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}