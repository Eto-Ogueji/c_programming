#include <stdio.h>
//simple calculator
int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", num1);

    printf("Enter second number: ");
    scanf("%lf", num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("\nResult: %lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult: %lf", result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("\nResult: %lf", result);
            break;
        
        case '/':
            result = num1 / num2;
            printf("\nResult: %lf", result);
            break;

        default:
            printf("%c is not valid", operator);

        return 0;

    }
}