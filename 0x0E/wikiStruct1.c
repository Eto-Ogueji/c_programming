#include <stdio.h>

/**
 * assigning values
*/

struct point {
    int x;
    int y;
} P;

int main(void)
{
   struct point p = {1, 2};
   struct point q;
   q = p;

   return 0; 
}

