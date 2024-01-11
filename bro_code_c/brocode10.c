#include <stdio.h>
#include <ctype.h>

//temperature converter

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    

    if(unit == 'C')
    {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f", temp);
    }

    else if(unit == 'F')
    {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }

    else if (unit == '\n')
    {
        printf("No unit entered!.. [PROGRAM TERMINATED]");
        printf("\n\n----------PRICK HEAD-----------");
        printf("\nRun the program again and enter a valid unit!");
    }


    else {
        printf("Invalid Unit.. [PROGRAM TERMINATED]\n\n");
        printf("-----------YOU'RE A BASTARD-----------\n");
        printf("Please run the program again and enter a unit!\n");

    }




    return (0);
}