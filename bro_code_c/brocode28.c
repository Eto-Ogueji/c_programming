//2d arrays useful for matrix and grids

#include <stdio.h>

int main()
{

    /*int numbers[2][3] = 
    {
        {2, 3, 4}, 
        {5, 6, 7}
    };*/

    int numbers[2][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]); //ets the no of rows
    int columns = sizeof(numbers)/sizeof(numbers[0][0]); //gets the no of cols

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //printf("numbers[%d][%d] = %d", i, j, numbers[i][j]);
            printf("%d", numbers[i][j]);
            printf("\n");
        }

        
    }
    printf("These are the values!");
    printf("\nRows: %d\nColumns: %d", rows, columns);

    return (0);
}