#include <stdio.h>

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Eto";
    user.email = "eto@gmail.com";
    user.age = 18;


    return (0);
}