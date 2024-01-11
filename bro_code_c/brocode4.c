#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;

    float z = x / (double)y;

    printf("%.2f", z);

    return (0);
}