#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    //To find the end of the destination string
    while(dest[i] != '\0')
    {
        i++;
    }

    while(j < n) //TO get the n amount of src string characters
    {
        //To concatenate the src string to dest string. Here, dest[i] is equal to the last element of the string
        dest[i] = src[j];

        if (src[j] == '\0')
            break;
        
        i++; //i has to increase because the elements of dest are increasing!!
        
        j++; //j increases to avoid an infinite loop

    }
}