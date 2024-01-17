#include <stdio.h>

int main(int argc, char **argv)
{
    //prints the name of a program

    (void) argc;
    printf("%s", *(argv + 0));

    return (0);
}