#include <stdio.h>

/**
 * initialization
 * of
 * struct
*/

struct point {
    int x;
    int y;
};



int main(void)
{
    //struct point p = {1, 2};

    //or

    struct point p = {.x = 1, .y = 2};

    printf("%d\n%d", p.x, p.y);
    return (0);
}