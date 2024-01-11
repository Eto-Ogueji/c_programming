//array of strings

#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    /* cars[0] = "Tesla"; //wrong */
    
    //instead do this

    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) // sizeof(cars)/sizeof(cars[0]) is used to get the number of elements in the array
    {
        printf("%s\n", cars[i]);
    }

    return (0); 
}
