#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int x, y;

    int mul;

    if (argc < 3)
    {
        printf("Error\n");
        return (0);
    }

    x = atoi(argv[1]); //ASCII to integer
    y = atoi(argv[2]); //ASCII to integer

    mul = x * y;
    
    printf("%d", mul);

    exit(EXIT_SUCCESS);
}