#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;

    for ( ; i < argc; i++ ) //not argc - 1: To include last argument
    {
        printf("%s", argv[i]);
    }

    exit(EXIT_SUCCESS);
}