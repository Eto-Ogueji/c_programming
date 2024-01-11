//string functions
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";

    //strlwr(string1);
    //strupr(string1);
    //strcat(string1, string2);
    //strncat(string1, string2, 1);
    //strcpy(string1, string2);
    //strncpy(string1, string2, 2);

    //strset(string1, '?');
    //strnset(string1, 'x', 1);
    //strrev(string1);
    //printf("%s", string1);

    //int result = strcmp(string1, string2);
    //printf("%d", result);

    int result = strcmp(string1, string2);
    if (result == 0)
    {
        printf("These strings are the same");
    }     

    else{
        printf("These strings are not the same");
    }

    return (0);
}