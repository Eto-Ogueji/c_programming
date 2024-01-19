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
    struct User *ptr;

    ptr = &user;

    (*ptr).name = "Foo Bar";

    ptr->email = "etoogueji@gmail.com";

    return (0);
}