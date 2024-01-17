#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    char **array;
    int i, j;

    int len = width * height; //total numbers of elements in the grid

    if (len <= 0)
        return NULL;

    array = (int **)malloc(sizeof(int) * height);

    if (array == NULL)
        return NULL;

    for(i = 0; i < height; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            for (i--; i >= 0; i--)
            {
                free(array);//frees each allocated memory
            }
            free(array);
            return (NULL);
        }
    }

    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            array[i][j] = 0;
    
    return (array);
}