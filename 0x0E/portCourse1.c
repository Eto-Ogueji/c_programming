#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
};

int main(void)
{
    struct Student kevin;

    struct Student kevin;

    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "000123123");

    kevin.age = 40;
    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;

    for (int i = 0; i < 5; i++)
        printf("%d ", kevin.grades[i]);
    printf("\n");


    printf("Age: %d\n", kevin.age);

    return (0);
}