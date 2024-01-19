#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p_dog;
    int i, malName, malOwner;

    p_dog = malloc(sizeof(p_dog));
    if(p_dog == NULL || !(name) || !(owner))
    {
        free(p_dog);
        return (NULL);
    }


    for (malName = 0; name[malName]; malName++)
        ;

    for (malOwner = 0; owner[malOwner]; malOwner++)
        ;
    
    p_dog->name = malloc(malName + 1);
    p_dog->owner = malloc(malOwner + 1);

    if (!(p_dog->name) || !(p_dog->owner))
    {
        free(p_dog->owner);
        free(p_dog->name);
        free(p_dog);
        return (NULL);
    }

    for (i = 0; i < malName; i++)
        p_dog->name = name[i];
    p_dog->name[i] = '\0';

    p_dog->age = age;

    for (i = 0; i < malOwner; i++)
        p_dog->owner[i] = owner[i];
    p_dog->owner[i] = '\0';

    return (p_dog);

}