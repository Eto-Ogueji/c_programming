#include <stdio.h>

void print_array(int *a, int n)
{
    int i;
    //int *a == int a[] but not of the same type sha

    while (i < n)
    {
        printf("%d", *(a + i));
        if (i != (n - 1))
            printf(", ");
        i++;
        
    }

    printf("\n");
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    print_array(a, 5);
}