#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        exit(EXIT_FAILURE); //if only the program name
    
    else
        printf("%d", argc - 1); //excluding the programs name
    
    exit(EXIT_SUCCESS);
    
}