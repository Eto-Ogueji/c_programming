#include <stdio.h>
#include <string.h>


//typedef char user[25]; //user is now a new array type of strictly 25 bytes

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{

    User user1 = {"Bro", "password123", 123456789};
    User user2 = {"Bruh", "password321", 987654321};

    
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("\n");

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);



    return 0;
}