#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    int tries;

    printf("\nWhat's your name?");
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0'; //to prevent newline output before result



    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name");
        printf("\nPlease enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] == '\0';

        tries++;
    }

    if (tries == 3)
    {
        printf("Too many wrong attempts: \n");
        return (0);
    }

    else if (strlen(name) > 0)
    {
        printf("\nHello %s", name);
    }

    return (0);
}