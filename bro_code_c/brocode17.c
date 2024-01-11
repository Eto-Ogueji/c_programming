//return statement

#include <stdio.h>
#include <stdlib.h>

double square(double x)
{
    return x * x;
}

int main()
{
    double x = square(3.14);
    printf("%.4lf", x);

    return 0;
    
}