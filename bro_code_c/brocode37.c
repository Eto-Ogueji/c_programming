#include <stdio.h>

int main()
{
    //bitwise operators

    int x = 6; //0000 0110
    int y = 12; //0000 1100
    int z = 6; //0000 0000

    //z = x & y;
    //printf("AND = %d\n", z);

    //z = x | y; //0000 1110
    //printf("OR: = %d\n", z);

    //z = x ^ y;
    //printf("XOR = %d\n", z); 

    //z = x << 1;
    //printf("SHIFT LEFT = %d\n", z);

    //z = x << 2;
    //printf("SHIFT LEFT = %d\n", z);

    //z = x >> 1;
    //printf("SHIFT RIGHT = %d\n", z);
    
    z = x >> 4;
    printf("SHIFT RIGHT = %d\n", z);


    return 0;
}