#include <stdio.h>

/**
 * pointer = a "variable-like" reference that holds a memory address to another variable
 * 
 * some tasks are perfomed more easily with pointers
 * 
 *  * = indirection operator (value at address)
*/

//arguments to function

void printAge(int *pAge)
{
    printf("You are %d years old\n", *pAge);
}


int main()
{
    int age = 21;
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %dbytes\n",sizeof(age));
    printf("value of pAge: %p\n", sizeof(pAge));

    printf("address of age: %p", &age);
    printf("value of stored address: %d\n", *pAge);


    printAge(pAge);
    
    return 0;
}