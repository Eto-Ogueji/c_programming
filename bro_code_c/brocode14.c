//NOT logical operator

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool sunny = true;

    /*if (sunny)
    {
        printf("\nIt's sunny outside!");
    }

    else{
        printf("\nIt's cloudy outside!");
    }*/

    if (!sunny)
    {
        printf("\nIt's cloudy outside!");
    }

    else
    {
        printf("\nIt's sunny outside!");
    }

    return (0);
}