#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{

    int c, i, j, ia;
    char **argV;

    if (ac == 0)
        return NULL;

    for (c = i = 0; i < ac; i++)
    {
        if (av[i] == NULL)
            return (NULL)

        for(j = 0; av[i][j] != '\0'; j++)
            c++;
        c++;
    }

    aout = malloc((c + 1) * sizeof(char));

    if (aout == NULL)
    {
        free(aout);
        return (NULL);
    }

    for (i = j = ia = 0; ia< c; j++, ia++)
    {
        if (av[i][j] == '\0')
        {
            aout
        }
    }

}