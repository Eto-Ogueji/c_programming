#include <stdio.h>

/**
 * pointers to struct
*/

struct point
{
    int x;
    int y;
};

struct point my_point = {3, 7};
struct point *p = &my_point;

(*p).x = 8; // == p->x = 8

