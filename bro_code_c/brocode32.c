//structs

#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    struct Player player;

    printf("Enter your name: ");
    scanf("%s", &player.name);

    printf("Enter your score: ");
    scanf("%d", &player.score);

    
    
    printf("%s: ", player.name);
    printf("%d\n", player.score);

    return (0);
}