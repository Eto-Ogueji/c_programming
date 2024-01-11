#include <stdio.h>

int main()
{

    for(int i = 1; i <= 20; i++)
    {
        /*if (i == 13)
        {
            continue; //skip 13 print the others
        }*/

        if (i == 13)
        {
            break; //exit loop
        }

        printf("%d\n", i);
    }

    return (0);
}