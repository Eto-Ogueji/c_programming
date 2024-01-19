//suck cocks
#include <stdio.h>
#include <stdlib.h>

struct User
{
    char *name;
    char *email;
    char *class;
    char *address;
    int age;
};

struct User *new_user(char *name, char *email, char *class, char *address, int age)
{
    struct User *user;

    user = malloc(sizeof(struct User));
    
    if (user == NULL)
        return NULL;

    user->name = name;
    user->email = email;
    user->class = class;
    user->address = address;
    user->age = age;

    return (user);
};


int main(void)
{
    struct User *user;

    user = new_user("Eto Ogueji", "etoogueji@gmail.com", "100 level", "Your balls on fire street bitch!", 18);

    if (user == NULL)
        return (1);

    printf("Your name is: %s\n", user->name);
    printf("Your email: %s\n", user->email);
    printf("Your class: %s\n", user->class);
    printf("Your address: %s\n", user->address);
    printf("Your age: %s\n", user->age);

    return (0);
}