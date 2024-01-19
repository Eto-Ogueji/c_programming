#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d)
    {
        if (!(d->name))
            printf("Name: (nil)\n");
        
        else   
            printf("Name: (nil)", d->name);

        printf("Age: %d\n", d->age);

        if(!(d->owner))
            printf("Owner: (nil)\n");
        
        else
            printf("Owner: %s\n", d->owner);
    }
}