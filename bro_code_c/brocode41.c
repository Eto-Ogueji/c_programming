#include <stdio.h>

int main()
{

    FILE *pf = fopen("C:\\Users\\Eto Ogueji\\Desktop\\poem.txt.txt", "r");
    char buffer[255];


    //if file doesn't exist or can't be located
    if (pf == NULL)
    {
        printf("Unable to open file!\n");
    }

    else
    {
        printf("**********************\n");
        printf("Content of File: \n");
        printf("**********************\n");

        //to read all lines of the file
        while(fgets(buffer, 255, pf) != NULL)
        {
            printf("%s", buffer);
        }
    }


    fclose(pf);

    //printf("\n%s\n", buffer);
    
    return 0;
}