#include <stdio.h>

void print_rev(char *s)
{
    int len;

    while (len >= 0) //until len is less than 0
    {
        if (s[len] == '\0')
            break;

        len++;
    }

    for (len--; len >= 0; len--)
        putchar(s[len]);
    putchar('\n');
}




int main(void)
{
    char *str;

    str = "I do no fear computer. I fear the lack of them - Isaac Asimov";

    print_rev(str);

    return(0);
}