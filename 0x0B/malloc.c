#include <stdio.h>
#include <stdio.h>

int main(void)
{
    int n;
    int *ar;

    n = 5;

    ar = malloc(n * sizeof(char));
    ar[0] = 'C';
    ar[1] = 'o';
    ar[2] = 'o';
    ar[3] = 'o';
    ar[4] = 'l';
    ar[5] = '\0';

    printf("%s\n", ar);
    return (0);
}