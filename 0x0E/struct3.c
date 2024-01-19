#include <stdio.h>

//assigning values to elements

struct User
{
    char *name;
    char *email;
    int age;
};

int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "etoogueji@gmail.com";
    user.age = 98;

    return (0);
}