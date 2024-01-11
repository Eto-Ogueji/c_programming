#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    //("%d bytes\n", sizeof(prices));
    
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("array[%d] = $%.2lf", i, prices[i]);
        printf("\n");
    }
    return 0;
}