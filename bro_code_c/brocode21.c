#include <stdio.h>

int main()
{
    int i;

   // for(int i = 1; i <= 10; i++)
   // {
    //    printf("test\n");
    //}

    for(i = 10; i > 1; i-=3)
    {
        printf("%d", i);
        printf(", ");
    }
    printf("%d", i);
    return 0;
}