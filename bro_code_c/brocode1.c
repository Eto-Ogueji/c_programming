#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';
    char b[] = "Bro";

    float c = 3.141592;
    double d = 3.141592653589793;

    printf("%0.15f\n", c);
    printf("%0.15lf\n", d);

    char z = '5';
    bool e = true;

    char f = 120;
    __int8 w = 5;
    unsigned char g = 256;

    short int h = 32767;
    unsigned short int i = 65535;

    int j = 2147483647;
    unsigned int k = 4294967295; 

    printf("%d\n", e);
    printf("%c\n", f);

    printf("%d\n", h);
    printf("%d\n", i);

    printf("%d\n", j);
    printf("%u\n", k);

    printf("%d", a);
    printf("%d", sizeof(w));

    return 0;
}