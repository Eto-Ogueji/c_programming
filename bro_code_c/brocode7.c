#include <stdio.h>
#include <math.h>

//3 sides of a triangle
int main()
{
    double A;
    double B;
    double C;

    printf("Enter size A:");
    scanf("%lf",&A);

    printf("Enter side B:");
    scanf("%lf", &A);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf",C);

    return (0);
}