#include <stdio.h>

int main()
{
   FILE *pf = fopen("C:\\Users\\Eto Ogueji\\Desktop\\C\\Bro Code\\C\\brocode41.c", "a");

    fprintf(pf, "#include <stdio.h>\nint main()\n{\nreturn 0;}");

    fclose(pf);

/*if (remove("test.txt") == 0)
{
    printf("That file was deleted successfully!");
}

else{
    printf("That file was NOT deleted");
}
*/

return 0;
}