#include <stdio.h>

//memory

int main()
{

    char a;
    int b[3];


    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    
    printf("\n");

    printf("%p\n", &a);
    printf("%p\n", &b);


    return 0;
}