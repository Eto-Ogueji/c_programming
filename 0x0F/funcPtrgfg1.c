#include <stdio.h>

//array of function pointers

void add(int a, int b)
{
    printf("Addition: %d", a + b);
}

void sub(int a, int b)
{
    printf("Subtraction: %d", a - b);
}

void mul(int a, int b)
{
    printf("Multipication: %d", a * b);
}


int main()
{
    void (*fun_ptr_arr[])(int, int) = {add, sub, mul};

    unsigned int ch, a = 15, b = 10;

    printf("Enter choice: add(0) | sub(1) | mul(2)");
    scanf("%d", &ch);

    if (ch > 2)
        return (0);

    (fun_ptr_arr[ch])(a, b);

    return (0);
}