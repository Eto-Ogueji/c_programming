#include <unistd.h>

void printChar(char c)
{
    write(1, &c, 1);
}

void printAllLetterStartingFrom(char c)
{
    if (c > 'z')
    {
        return;
    }
    printChar(c);
    printAllLetterStartingFrom(c + 1);  //print the next character
}

void printAlphabet(void)
{
    printAllLetterStartingFrom('a');
}

int main(void)
{
    printAlphabet();
    printChar('\n');
    return(0);
}