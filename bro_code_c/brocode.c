#include <stdio.h>

int main()
{
    printf("Program ran successfully\n");
    printf("\"I like Pizza\" - Abraham Lincoln probably\n");

    printf("\n");

    char name[] = "Bro"; // array of characters
    char* name2 = "Eto"; // another way of declaring arrays
    int age = 5;
    float gpa = 2.05;
    char grade = 'C';


    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}
