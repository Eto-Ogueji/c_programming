#include <stdio.h>

void _puts(char *str)
{
    int i = 0;

    while(*str + i)
    {
        putchar(*(str + i));
        i++;
    
    }

    putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}