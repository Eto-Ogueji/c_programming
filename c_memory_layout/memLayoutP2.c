#include <stdio.h>

char str[] = "Amlendra Kumar";

int main(void)
{
    printf("%s\n", str);

    str[0] = 'k';

    printf("%s\n", str);

    return (0);
}