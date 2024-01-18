#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5]; // Pointer to an array ofo 5 integers
 
    ptr = &arr; // Assign the address of 'arr' to 'ptr'

    // Accessing the elements using (*ptr)[n]
    printf("%d\n", (*ptr)[0]);
    printf("%d\n", (*ptr)[2]);

    return (0);
}