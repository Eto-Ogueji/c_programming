#define min(X, Y) ((X) < (Y) ? (X) : (Y))
#include <stdio.h>

int main(void)
{
    int n = 5;
    int *p;

    p = &n;
    
    int a = 5, b = 3;
    int x, y, z;

    x = min(a, b);
    y = min(1, 2);
    z = min(a + 28, *p);
}